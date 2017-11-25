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
#include <string>
#include <sys/stat.h>
#include <queue>
#include <sstream>
using namespace std;

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences);

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestLibrary(priority_queue<string> & library);

// open library and return titles or create library file if not found
priority_queue<string> openLibrary(string & lastBook);

// close library and save updates
void closeLibrary(priority_queue<string> library, string lastBook);

// print screen of text
void readBook(string title);

// get user selection from entries
int getSelection(const char * entries[], int numEntries);

// check if directory exists
bool isDir(const char* path);

// select book from library
string selectBook(priority_queue<string> library);

// select chapter and move index to appropriate location
void jumpToChapter(string selectedBook);

// import a book from pdf format
int importBook(const char * path);

int main() {
	string currentBook;
	priority_queue<string> library = openLibrary(currentBook); //TODO make sure never pop when empty, will cause seg fault
	int choice = 0;
	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	noecho();
	const char * menuEntries[] = { "Read Book", "Select book", "Select Chapter", "Import Book", "Create test Library", "Exit" };
	int numEntries = sizeof(menuEntries) / sizeof(char *);
	while (choice != numEntries - 1) {
		choice = getSelection(menuEntries, numEntries);
		switch (choice) {
		case 0:
			if (!currentBook.empty()) {  //TODO this error check is not enough I've had it crash on unitilized string
				readBook(currentBook); //readBook("this title doesnt exist"); //error check,
			}
			break;
		case 1:
			currentBook = selectBook(library);
			break;
		case 2:
			jumpToChapter(currentBook);
			break;
		case 3:
			// TODO add .txt/.dat files to directory and add library
			// TODO, check for duplicate titles on incoming books during import
			clear();
			printw("Add import function here");
			importBook("../Test_PDF_Files/SweatingCandles.pdf");
			refresh();
			break;
		case 4:
			makeTestLibrary(library);
			break;
		default:
			break;
		}
	}
	endwin();
	closeLibrary(library, currentBook);
	return (0);
}

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences) {
	int chapIndex[5] = { };

	// make text file and record indexes for dat file
	ofstream file;
	string fName = "./importedBooks/" + title + ".txt";
	file.open(fName.c_str());

	//file open error check
	if (file.fail()) {
		cerr << "Error (makeTestBook()): cannot open .txt file '" + fName << "'" << endl;
		cerr << "Closing Program..." << endl;
		exit(EXIT_FAILURE);
	}

	int lines = 0;
	// write intro if necessary
	file << "intro here if applicable" << flush;

	// -- write book
	for (int i = 0; i < 5; i++) {
		file << endl << endl << "Chapter #" << i << ' ' << endl;
		lines += 3;
		chapIndex[i] = lines;
		file << endl;
		lines++;
		for (int j = 0; j < numSentences; j++) {
			file << "This here is sentence number " << j << " of chapter " << i << " in book " << title << ".  ";
			if ((j % 10) == 0 && j > 1) {
				file << endl << endl;
				lines += 2;
			}
		}
	}
	file << " " << endl;
	file << " " << endl;
	lines++;
	file.close();
	// write data file
	fName = "./importedBooks/" + title + ".dat";
	file.open(fName.c_str());

	//error check
	if (file.fail()) {
		cerr << "Error (makeTestBook()): cannot open .dat file '" + fName << "'" << endl;
		cerr << "Closing Program..." << endl;
		exit(EXIT_FAILURE);
	}

	// write current index = 0
	file << '0' << endl;
	// write number of lines in text file
	file << lines << endl;
	// write number of chapters
	file << 5 << endl;
	// write chapter indexes
	for (int i = 0; i < 5; i++) {
		file << "Chapter " << i << endl;
		file << *(chapIndex + i) << endl;
	}
}

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestLibrary(priority_queue<string> & library) {
	int numLines = 50;
	makeTestBook("Title: alpha", numLines);
	library.push("Title: alpha");
	makeTestBook("Title: bravo", numLines);
	library.push("Title: bravo");
	makeTestBook("Title: charlie", numLines);
	library.push("Title: charlie");
	makeTestBook("Title: delta", numLines);
	library.push("Title: delta");
	makeTestBook("Title: echo", numLines);
	library.push("Title: echo");
	makeTestBook("Title: foxtrot", numLines);
	library.push("Title: foxtrot");
	makeTestBook("Title: golf", numLines);
	library.push("Title: golf");
	makeTestBook("Title: hotel", numLines);
	library.push("Title: hotel");
	makeTestBook("Title: india", numLines);
	library.push("Title: india");

}

// open library and return titles or creates library directory/file if not found
priority_queue<string> openLibrary(string & lastBook) {
	if (!isDir("./importedBooks/")) {
		if (-1 == mkdir("./importedBooks/", S_IRWXU)) {
			cerr << "Error creating library directory." << endl;
			exit(1);
		}
	}
	priority_queue<string> out;
	string buffer;
	string fName = "./importedBooks/library.dat";
	ifstream file(fName.c_str());
	getline(file, buffer);
	lastBook = buffer;
	if (file.good()) {
		while (getline(file, buffer) && file.peek() != '\n') {
			out.push(buffer);
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
void closeLibrary(priority_queue<string> library, string lastBook) {
	string fName = "./importedBooks/library.dat";
	ofstream file(fName.c_str());
	string buffer;
	file << lastBook << endl;
	while (library.size() > 0) {
		buffer = library.top();
		file << buffer << endl;
		library.pop();
		;
	}
}

// print screen of text
void readBook(string title) {
	Book * currentBook = new Book(title);
	unsigned int index = currentBook->getIndex();
	unsigned int linesPerScreen;
	string fName = "./importedBooks/" + currentBook->getTitle() + ".txt";
	fstream bookStream;
	//ALEX TODO: error checking for bookStream, there is an error if no book selected when this is called, can happen on initial startup
	bookStream.open(fName.c_str());
	int row, col;
	int charCount = 0;
	int ch = 0;
	string buffer;
	while (ch != KEY_LEFT) {
		bookStream.clear();
		bookStream.seekg(bookStream.beg);
		unsigned int i = 0;
		charCount = 0;
		while (i < index && !bookStream.eof()) {
			bookStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			i++;
		}
		getmaxyx(stdscr, row, col);
		clear();
		linesPerScreen = 0;
		while (charCount < ((row * col) / 2) && (index + linesPerScreen) < (currentBook->getNumLines())) {
			getline(bookStream, buffer);
			printw(buffer.c_str());
			printw("\n");
			charCount += buffer.size();
			linesPerScreen++;
		}
		refresh();
		ch = getch();
			switch (ch) {
			case KEY_UP:
				if (index > linesPerScreen){
					index -= linesPerScreen;
				}else {
					index=0;
				}
				break;
			case KEY_DOWN:
				if (index + linesPerScreen < currentBook->getNumLines()) {
					index += linesPerScreen;
				} else {
					index = currentBook->getNumLines()-linesPerScreen;
				}
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
	int spacing = 1;
	int ch, row, col, lineNum;
	while (choice == 0) {
		getmaxyx(stdscr, row, col);
		WINDOW * menuWindow = newwin(height, width, (row - height) / 2, (col - width) / 2);
		keypad(menuWindow, TRUE);
		lineNum = 1;
		clear();
		refresh();
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
		mvwprintw(menuWindow, lineNum++, spacing, "Use up and down arrow to highlight selection.");
		mvwprintw(menuWindow, lineNum++, spacing, "Then press enter to select.");
		wattroff(menuWindow, A_BOLD);
		wrefresh(menuWindow);
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
	}
	endwin();
	return choice - 1;
}

// check if directory exists
bool isDir(const char* path) {
	struct stat buf;
	stat(path, &buf);
	return S_ISDIR(buf.st_mode);
}

// select book from library
string selectBook(priority_queue<string> library) {
	string selectedBook;
	int numBooks = library.size();
	string booksString[library.size()];
	const char * booksChar[library.size()];
	for (int i = 0; i < numBooks; i++) {
		booksString[i] = library.top();
		booksChar[numBooks - 1 - i] = booksString[i].c_str();
		library.pop();
	}
	for (int j = 0; j < numBooks; j++) {
		library.push(booksString[numBooks - 1 - j].c_str());
	}
	int selection = getSelection(booksChar, library.size());
	selectedBook = booksChar[selection];
	clear();
	printw(selectedBook.c_str());
	refresh();
	return selectedBook;
}

int importBook(const char * path){
	
	if (!isDir("./importedBooks/")) {
		if (-1 == mkdir("./importedBooks/", S_IRWXU)) {
			cerr << "Error creating library directory." << endl;
			exit(1);
		}
	}
	
	string f_export_name; // name of the exported txt file
  fstream f_export;			// exported txt file object
  
  // Allow for manipulation of path via string methods
  string s_path(path);
  
  // Check if path is to .pdf file
  int index = s_path.find(".pdf");
  
  if(index == string::npos){
    cout << "Path chosen does not point to a .pdf file" << endl;
    return -1;
  }

  // Call executable for pdftotext given the input path
  string command = "pdftotext -nopgbrk ";
  command.append(path);
  
  system(command.c_str());
  
  
  // Get the path for the .txt output of pdftotext
  s_path.replace(index, 4, ".txt");
  
  while(s_path[index] != '/' && index > 0){
    index --;
  }
  
  f_export_name = s_path.substr(index+1);
  
  // Check if pdftotext successfully exported a .txt
  f_export.open(s_path.c_str());
  
  if(f_export.fail()){
    cout << ".txt failed to be instantiated";
    return -1;
  }
  
  // Read exported .txt and copy to new/existing file
  stringstream export_content;
  string buffer;
  while(getline(f_export, buffer)){
    export_content << buffer;
    export_content << endl;
  }
  f_export.close();
  
  ofstream f_new_book(("./importedBooks/" + f_export_name).c_str());
  
  if(f_new_book.fail()){
    cout << "Failed to create new file" << endl;
    return -1;
  }
  
  f_new_book << export_content.str();
  
  f_new_book.close();

	return 1;
}

// select chapter and move index to appropriate location
void jumpToChapter(string selectedBook){
	vector<pair<string, int> > chapters;
	Book * currentBook = new Book(selectedBook);
	const char * chapterTitles[currentBook->getChapters().size()];
	for (int i =0; i < (int)currentBook->getChapters().size(); i++){
		chapterTitles[i]=currentBook->getChapters()[i].first.c_str();
	}
	int selection =getSelection(chapterTitles, currentBook->getChapters().size());
	currentBook->setIndex(currentBook->getChapters()[selection].second-1);
	delete currentBook;
}
