//============================================================================
// Name        : bookReader.cpp
// Author      : Joshua SImmerson
// Version     : 1.0
// Description : Ebook reader with ncurses based user interface.
//============================================================================

#include "book.cpp"
#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <limits>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <sys/stat.h>
using namespace std;

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences);

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestLibrary(vector<string> library);

// goto line in input file
void go2Line(fstream & stream, unsigned int lineNum);

// open library and return titles or create library file if not found
vector<string> openLibrary();

// close library and save updates
void closeLibrary(vector<string> library);

// print screen of text
void readBook(string title);

// get user selection from entries
int getSelection(const char * entries[], int numEntries);

// print menu for getSelection
void printMenu(WINDOW *menuWindow, const char * entries[], int selected,
		int numEntries);

// check if directory exists
bool isDir(const char* path);

int main() {
	vector<string> library = openLibrary();
	//makeTestLibrary(library);
	int choice = 0;
	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	noecho();
	const char * entries[] = { "Read Book", "Create test Library (only do this once)", "Exit" };
	int numEntries = sizeof(entries) / sizeof(char *);

	while (choice != numEntries - 1) {
		choice = getSelection(entries, numEntries);
		switch (choice) {
		case 0:
			readBook("Title: alpha");
			break;
		case 1:
			makeTestLibrary(library);
			break;
		default:
			break;
		}
	}
	endwin();
	closeLibrary(library);
	return (0);
}

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences) {
	int chapIndex[5] = { };

	// make text file and record indexes for dat file
	ofstream file;
	string fName = "./importedBooks/" + title + ".txt";
	file.open(fName.c_str());
	int lines = 0;
	// write intro if necessary
	file << "intro here if applicable" << endl;
	lines++;
	// -- write book
	for (int i = 0; i < 5; i++) {
		file << "Chapter #" << i << ' ' << endl;
		lines++;
		chapIndex[i] = lines;
		for (int j = 0; j < numSentences; j++) {
			file << "This here is sentence number " << j << " of chapter " << i
					<< ".  ";
			lines++;
			if ((j % 10) == 0 && j > 1) {
				file << endl << endl;
				lines++;
			}
		}
	}
	file.close();
	// write data file
	fName = "./importedBooks/" + title + ".dat";
	file.open(fName.c_str());
	// - write current index = 0
	file << '0' << endl;
	// write number of chapters
	file << 5 << endl;
	// write chapter indexes
	for (int i = 0; i < 5; i++) {
		file << "Chapter " << i << endl;
		file << *(chapIndex + i) << endl;
	}
}

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestLibrary(vector<string> library) {
	int numLines = 50;
	makeTestBook("Title: alpha", numLines);
	library.push_back("Title: alpha");
	makeTestBook("Title: bravo", numLines);
	library.push_back("Title: bravo");
	makeTestBook("Title: charlie", numLines);
	library.push_back("Title: charlie");
	makeTestBook("Title: delta", numLines);
	library.push_back("Title: delta");
	makeTestBook("Title: echo", numLines);
	library.push_back("Title: echo");
	makeTestBook("Title: foxtrot", numLines);
	library.push_back("Title: foxtrot");
	makeTestBook("Title: golf", numLines);
	library.push_back("Title: golf");
	makeTestBook("Title: hotel", numLines);
	library.push_back("Title: hotel");
	makeTestBook("Title: india", numLines);
	library.push_back("Title: india");
}

// goto line in input file
void go2Line(fstream & stream, unsigned int lineNum) {
	stream.clear();
	stream.seekg(stream.beg);
	unsigned int i = 0;
	while (i < lineNum && !stream.eof()) {
		stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		i++;
	}

}

// open library and return titles or creates library directory/file if not found
vector<string> openLibrary() {
	if (!isDir("./importedBooks/")){
		const int dir_err = mkdir("./importedBooks/", S_IRWXU);
		if (-1 == dir_err)
		{
		    cerr << "Error creating library directory." << endl;
		    exit(1);
		}
	}
	vector<string> out;
	string buffer;
	string fName = "./importedBooks/library.dat";
	ifstream file(fName.c_str());
	if (file.good()) {
		while (getline(file, buffer) && file.peek() != '\n') {
			out.push_back(buffer);
		}
	} else {
		fName = "./importedBooks/library.dat";
		ofstream newFile(fName.c_str());
		newFile.close();
	}
	file.close();
	return out;
}

// close library and save updates
void closeLibrary(vector<string> library) {	// TODO, check for duplicate titles on incoming books during import
	string fName = "./importedBooks/library.dat";
	ofstream file(fName.c_str());
	for (unsigned int i = 0; i < library.size(); i++) {
		file << library[i] << endl;
	}
}

// print screen of text
void readBook(string title) {
	Book * currentBook = new Book(title);
	unsigned int shift, index = currentBook->getIndex();
	fstream bookStream;
	bookStream.open("./importedBooks/" + currentBook->getTitle() + ".txt");
	int row, col;
	int charCount = 0;
	int ch = 0;
	string buffer;
	while (ch != KEY_LEFT) {
		shift = 0;
		index += shift;
		go2Line(bookStream, index);
		getmaxyx(stdscr, row, col);
		clear();
		while (charCount < ((row * col) / 2)) {
			getline(bookStream, buffer);
			printw(buffer.c_str());
			printw("\n");
			charCount += buffer.size();
			shift++;
		}
		refresh();
		charCount = 0;
		ch = getch();
		switch (ch) {
		case KEY_UP:
			if (index > shift) {
				index -= shift;
			} else {
				index = 0;
			}
			break;
		case KEY_DOWN:
			index += shift;		//TODO stop from going past end of file
			break;
		default:
			break;
		}
	}
	currentBook->setIndex(index);
	bookStream.close();
	delete currentBook;
}

// get user selection from entries
int getSelection(const char * entries[], int numEntries) {
	int width = 49;
	int height = numEntries + 5;
	int selected = 1;
	int choice = 0;
	int ch, row, col;
	getmaxyx(stdscr, row, col);
	WINDOW * menuWindow = newwin(height, width, (row - height) / 2,
			(col - width) / 2);
	keypad(menuWindow, TRUE);
	printMenu(menuWindow, entries, selected, numEntries);
	while (choice == 0) {
		ch = wgetch(menuWindow);
		switch (ch) {
		case KEY_UP:
			if (selected == 1)
				selected = numEntries;
			else
				--selected;
			break;
		case KEY_DOWN:
			if (selected == numEntries)
				selected = 1;
			else
				++selected;
			break;
		case 10:
			choice = selected;
			break;
		default:
			break;
		}
		printMenu(menuWindow, entries, selected, numEntries);
	}
	endwin();
	return choice - 1;
}

// print menu for getSelection
void printMenu(WINDOW *menuWindow, const char * entries[], int selected,
		int numEntries) {
	int spacing = 1;
	int lineNum = 1;
	box(menuWindow, 0, 0);

	for (int i = 0; i < numEntries; ++i) {
		if (selected == i + 1) {
			wattron(menuWindow, A_REVERSE);
			mvwprintw(menuWindow, lineNum++, spacing, "%s", entries[i]);
			wattroff(menuWindow, A_REVERSE);
		} else
			mvwprintw(menuWindow, lineNum++, spacing, "%s", entries[i]);
	}
	lineNum++;
	wattron(menuWindow, A_BOLD);
	mvwprintw(menuWindow, lineNum++, spacing,
			"Use up and down arrow to highlight selection.");
	mvwprintw(menuWindow, lineNum++, spacing, "Then press enter to select.");
	wattroff(menuWindow, A_BOLD);
	wrefresh(menuWindow);
}

// check if directory exists
bool isDir(const char* path) {
    struct stat buf;
    stat(path, &buf);
    return S_ISDIR(buf.st_mode);
}
