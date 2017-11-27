//============================================================================
// Name        : bookReader.cpp
// Author      : Logic by Joshua Simmerson, error checking by Alex Barnes, import functions by Jake Hill
// Version     : 1.0
// Description : Ebook reader with ncurses based user interface.
//============================================================================

#include "../Include/BookReader.h"
#include "../Source/Book.cpp"
using namespace std;

int main() {
	string currentBook;
	priority_queue<string> library = openLibrary(currentBook);
	int choice = 0;
	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	noecho();
	const char * menuEntries[] = { "Read Book", "Select book", "Select Chapter", "Import txt Book", "Import PDF Book", "Create test Library", "Exit" };
	int numEntries = sizeof(menuEntries) / sizeof(char *);
	while (choice != numEntries - 1) {
		choice = getSelection(menuEntries, numEntries);
		switch (choice) {
		case 0:
			readBook(currentBook);
			break;
		case 1:
			currentBook = selectBook(library);
			break;
		case 2:
			jumpToChapter(currentBook);
			break;
		case 3:
			importBook(library);
			break;
		case 5:
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
	string fName = "../importedBooks/" + title + ".txt";
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
	fName = "../importedBooks/" + title + ".dat";
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
	if (!isDir("../importedBooks/")) {
		if (-1 == mkdir("../importedBooks/", S_IRWXU)) {
			cerr << "Error creating library directory." << endl;
			exit(1);
		}
	}
	priority_queue<string> out;
	string buffer;
	string fName = "../importedBooks/library.dat";
	ifstream file(fName.c_str());
	getline(file, buffer);
	lastBook = buffer;
	if (file.good()) {
		while (getline(file, buffer) && file.peek() != '\n') {
			out.push(buffer);
		}
	} else {
		fName = "../importedBooks/library.dat";
		ofstream newFile(fName.c_str());

		if (newFile.fail()) {
			cerr << "Error (openLibrary()): cannot open file '" + fName << "'" << endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}

		newFile.close();
	}

	file.close();
	return out;
}

// close library and save updates
void closeLibrary(priority_queue<string> & library, string lastBook) {
	string fName = "../importedBooks/library.dat";
	ofstream file(fName.c_str());
	string buffer;
	file << lastBook << endl;
	while (library.size() > 0) {
		buffer = library.top();
		file << buffer << endl;
		//don't pop if queue is empty
		if (!library.empty()) {
			library.pop();
		}
	}
}

// print screen of text
void readBook(string title) {
	//if empty title, or SelectBookDefault (aka no book selected)
	//then we can't read the book, so just return
	if (title.empty() || title=="SelectBookDefault") {
		return;
	}
	Book * currentBook = new Book(title);
	unsigned int index = currentBook->getIndex();
	unsigned int linesPerScreen;
	string fName = "../importedBooks/" + currentBook->getTitle() + ".txt";
	fstream bookStream;

	//error checking for bookStream
	if (bookStream.fail()) {
		cerr << "Error (readBook()): cannot open file '" + fName << "'" << endl;
		cerr << "Closing Program..." << endl;
		exit(EXIT_FAILURE);
	}

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
string selectBook(priority_queue<string> & library) {

	//check for selecting book when library empty
	string selectedBook = "SelectBookDefault";
	int numBooks = library.size();
	if (numBooks == 0) {
		return selectedBook;
	}
	string booksString[library.size()];
	const char * booksChar[library.size()];
	for (int i = 0; i < numBooks; i++) {
		booksString[i] = library.top();
		booksChar[numBooks - 1 - i] = booksString[i].c_str();
		//don't pop if queue is empty
		if (!library.empty()) {
			library.pop();
		}
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

// select chapter and move index to appropriate location
void jumpToChapter(string selectedBook){
	if (selectedBook.empty() || selectedBook=="SelectBookDefault"){
		return;
	}
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

void importBook(priority_queue<string> & library) {
	int width = 60;
	int height = 10;
	int spacing = 1;
	int lineNum = 1;
	int row, col;
	char * path;
	getmaxyx(stdscr, row, col);
	WINDOW * importWindow = newwin(height, width, (row - height) / 2, (col - width) / 2);
	keypad(importWindow, TRUE);
	clear();
	refresh();
	box(importWindow, 0, 0);
	mvwprintw(importWindow, lineNum++, spacing, "Enter path/filename of book to be imported: ");
	mvwprintw(importWindow, lineNum++, spacing, "");
	wrefresh(importWindow);
	echo();
	wgetstr(importWindow, path);
	noecho();

	//*********************************************************************************
	string title = importTXT(path);
	if(title == ""){
		cerr << "failed to import book" << endl;
	}else{
		library.push(title);   // imortTXT returns title<string> that goes in library
	}
	//*********************************************************************************

	endwin();
	library.size();
}

string importTXT(const char* path){
  string txt_content = "";
  string dat_path = "";
  
  string s_path(path);
  int index = s_path.length() - 1;
  while(s_path[index] != '/' && index > 0){
    index --;
  }
  
  string f_export_name = "../importedBooks/" + s_path.substr(index+1);
  string export_title = s_path.substr(index+1, (s_path.length() - 4));
  export_title = export_title.substr(0, export_title.length() - 4);
  
  
  ifstream f_txt(path);
  if(f_txt.fail()){
    cerr << "Could not find .txt @ " << path << endl;
    export_title = "";
    return export_title; 
  }else{
    string buffer;
    while(getline(f_txt, buffer)){
      buffer.append("\n");
      txt_content += buffer;
    }
  }
  f_txt.close();
  
  dat_path.append(path);
  dat_path = dat_path.substr(0, dat_path.length() - 3);
  dat_path.append("dat");
  
  string dat_content = "";
  
  ifstream f_dat(dat_path.c_str());
  if(f_dat.fail()){
    cerr << "Could not find .dat @" << path << endl; 
  }else{
    string buffer;
    while(getline(f_dat, buffer)){
      buffer.append("\n");
      dat_content += buffer;
    }
  }
  f_dat.close();
   
  
  fstream f_export_txt(f_export_name.c_str());
  if(f_export_txt.good()){
     f_export_txt << txt_content;
  }else{
    ofstream new_file(f_export_name.c_str());
    if(new_file.fail() || txt_content == ""){
      cerr << "Could not create new file " << f_export_name << endl;
    }else{
      new_file << txt_content;
      new_file.close();
    }
  }
  
  fstream f_export_dat(("../importedBooks/" + export_title + ".dat").c_str());
  if(f_export_dat.good()){
     f_export_dat << dat_content;
     f_export_dat.close();
  }else{
    ofstream new_file(("../importedBooks/" + export_title + ".dat").c_str());
    if(new_file.fail()){
      cerr << "Could not create new file " << ("../importedBooks/" + export_title + ".dat") << endl;
    }else{
      new_file << dat_content;
      new_file.close();
    }
  }
  
  return export_title;
}
