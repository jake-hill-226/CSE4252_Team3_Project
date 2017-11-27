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

#include <stdlib.h>
#include <stdexcept>
#include <stdio.h>
#include <utility>

using namespace std;

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences);

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestLibrary(priority_queue<string> & library);

// open library and return titles or create library file if not found
priority_queue<string> openLibrary(string & lastBook);

// close library and save updates
void closeLibrary(priority_queue<string> & library, string lastBook);

// print screen of text
void readBook(string title);

// get user selection from entries
int getSelection(const char * entries[], int numEntries);

// check if directory exists
bool isDir(const char* path);

// select book from library
string selectBook(priority_queue<string> & library);

// select chapter and move index to appropriate location
void jumpToChapter(string selectedBook);

// import a book from pdf format
string importPDF(const char * path);

// get user inputs to import book and calls sub function per file type
void importBook(priority_queue<string> & library);

void generateMetadata(const char* pdf_path, const char* txt_path, const char* meta_path);

std::string exec(const char* cmd);

int main() {
	string currentBook;
	priority_queue<string> library = openLibrary(currentBook);
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
			readBook(currentBook);
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
			importBook(library);
			cerr << endl << endl<< "returned from input book" << endl << endl;
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
	string fName = "./importedBooks/library.dat";
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
<<<<<<< HEAD
	//if empty title, or SelectBookDefault
	if (title.empty() || title == "SelectBookDefault") {
=======
	//if empty title, or SelectBookDefault (aka no book selected)
	//then we can't read the book, so just return
	if (title.empty() || title=="SelectBookDefault") {
>>>>>>> final-project
		return;
	}
	Book * currentBook = new Book(title);
	unsigned int index = currentBook->getIndex();
	unsigned int linesPerScreen;
	string fName = "./importedBooks/" + currentBook->getTitle() + ".txt";
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
			if (index > linesPerScreen) {
				index -= linesPerScreen;
			} else {
				index = 0;
			}
			break;
		case KEY_DOWN:
			if (index + linesPerScreen < currentBook->getNumLines()) {
				index += linesPerScreen;
			} else {
				index = currentBook->getNumLines() - linesPerScreen;
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

string importPDF(const char * path) {

	if (!isDir("./importedBooks/")) {			// TODO is this needed? directory is built when the app opens by openLibrary()
		if (-1 == mkdir("./importedBooks/", S_IRWXU)) {
			cerr << "Error creating library directory." << endl;
			exit(1);
		}
	}
	
	string f_export_name;
  fstream f_export;
  
  // Allow for manipulation of path via string methods
  string s_path(path);
  
  // Check if path is to .pdf file
  int index = s_path.find(".pdf");
  
  if(index == string::npos){
    cerr << "Path chosen does not point to a .pdf file" << endl;
    //return 0;
  }
  
  // Get the path for the .txt output of pdftotext
  s_path.replace(index, 4, ".txt");
  
  while(s_path[index] != '/' && index > 0){
    index --;
  }
  
  f_export_name = s_path.substr(index+1);

  // Call executable for pdftotext given the input path
  string command = "./pdf2txt.exe -o ./importedBooks/" + f_export_name + " ";
  command.append(path);
  system(command.c_str());
  
  
  // Check if pdftotext successfully exported a .txt
  string txt_path = "./importedBooks/" + f_export_name;
  f_export.open(txt_path.c_str());
  
  if(f_export.fail()){
    cerr << ".txt failed to be instantiated";
    //return -1;
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
    cerr << "Failed to create new file" << endl;
    //return -1;
  }
  
  f_new_book << export_content.str();
  
  f_new_book.close();
  
  generateMetadata(path, txt_path.c_str(), "./test.dat");

	return f_export_name.substr(0, f_export_name.length() - 5);
}

std::string exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}

void generateMetadata(const char* pdf_path, const char* txt_path, const char* meta_path){
  ofstream f_meta(meta_path);
  if(f_meta.fail()){
    cout << "Failed to create metadata file" << endl;
    return;
  }
  
  fstream f_txt(txt_path);
  if(f_txt.fail()){
    cout << "Failed to open txt file" << endl;
    return;
  }
  
  int curr_index = 0;
  int num_lines = 0;
  int num_chapters = 0;
  pair<string, int> * chapter_map;
  
  // Capture content and number of lines in the file
  string buffer;
  string txt_contents = "";
  while(getline(f_txt, buffer)){
    num_lines ++;
    
    txt_contents += buffer + "\n";
  }
  
  f_txt.close();
  
  ofstream temp("./temp_toc.txt");
  temp.close();
  
  // Create file mapping chapters to page numbers
  stringstream command;
  command << "./bookMarkMapper.exe ";
  command << pdf_path;
  
  cout << "TESTING: " << command.str() << endl;
  
  exec(command.str().c_str());
  
  fstream f_chapter("./temp_toc.txt");
  if(f_chapter.fail()){
    cout << "Failed to open table of contents file" << endl;
    return;
  }
  
  if(getline(f_chapter, buffer)){
    istringstream(buffer) >> num_chapters;
    // num_chapters = stoi(buffer, nullptr);
  }
  
  if(num_chapters != 0){
    chapter_map = new pair<string,int>[num_chapters];
    int i = 0;
    while(getline(f_chapter, buffer) and i < num_chapters){
      chapter_map[i].first = buffer; // Set chapter title
      getline(f_chapter, buffer);
      istringstream(buffer) >> chapter_map[i].second; // Set chapter page
      
      i++;
    }
    
    f_chapter.close();
    
    exec("rm ./temp_toc.txt");
    
    // match chapter pages with string indecies
    int curr_chapter = 0;
    int page_num = chapter_map[curr_chapter].second;
    command.flush();
    command.str("");
    command << "./pdf2txt.exe -p ";
    command << page_num; 
    command << " ";
    command << pdf_path;
    
    
    string page = exec(command.str().c_str());
    
    int index_offset = 0;
    while(page != ""){
      // Find first occurance of page in full txt_file
      int chap_index = txt_contents.find(page); 
      
      if(chap_index == string::npos){
        cout << "Chapter " << curr_chapter << " content did not line up with txt doc" << endl
              << "Aborting" << endl;
        return;
      }
      
      // txt_contents = txt_contents.substr(chap_index);
      // index_offset += chap_index;
      
      chapter_map[curr_chapter].second = chap_index;
      
      curr_chapter++;
      
      int page_num = chapter_map[curr_chapter].second;
      command.str("");
      command << "./pdf2txt.exe -p ";
      command << page_num; 
      command << " ";
      command << pdf_path;
      page = exec(command.str().c_str());
    }
    
  }
  
  cout << "\t---Metadata---" << endl
       << "Current Index: " << curr_index << endl
       << "Num of Lines: " << num_lines << endl
       << "Num of Chapters: " << num_chapters << endl
       << "\tTable of Contents" << endl;
  for(int i = 0; i < num_chapters; i++){
    cout << chapter_map[i].first << " index: " << chapter_map[i].second << endl;
  }
  
  // Export Metadata to .dat file
  f_meta << curr_index << endl
         << num_lines << endl
         << num_chapters << endl;
  for(int i = 0; i < num_chapters; i++){
    f_meta << chapter_map[i].first << endl
           << chapter_map[i].second << endl;
  }
  
  f_meta.close();
       
  // Clean up
  delete[] chapter_map;
}

// select chapter and move index to appropriate location
void jumpToChapter(string selectedBook) {
	if (selectedBook.empty() || selectedBook == "SelectBookDefault") {
		return;
	}
	vector<pair<string, int> > chapters;
	Book * currentBook = new Book(selectedBook);
	const char * chapterTitles[currentBook->getChapters().size()];
	for (int i = 0; i < (int) currentBook->getChapters().size(); i++) {
		chapterTitles[i] = currentBook->getChapters()[i].first.c_str();
	}
	int selection = getSelection(chapterTitles, currentBook->getChapters().size());
	currentBook->setIndex(currentBook->getChapters()[selection].second - 1);
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
	cerr << endl << endl<< "got input" << endl << endl;
	noecho();

	//importPDF(path);					// this causes seg fault
	//library.push(importPDF(path));   // this is what we want

	getch();
	endwin();
	library.size();
	cerr << endl << endl<< "end of importBook" << endl << endl;
}

