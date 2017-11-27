//============================================================================
// Name        : book.cpp
// Author      : Logic by Joshua Simmerson, error checking by Alex Barnes
// Version     : 1.0
// Description : Class "book".  Provides a standard class to import a book
//				 into for the "bookReader" console to work with
//============================================================================

#ifndef BOOK
#define BOOK

#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

//Books are imported as text files with appropriate book and chapter titles in line with text
class Book {
public:
private:
	unsigned int currentIndex; 			// marker for current location in book, used by "bookReader"
	string savedTitle;					// title of book for table of contents and file labeling
	int numChapters;					// number of chapters is book
	vector<pair<string, int> > chapters;// chapter title and line number where it is located
	int numLines;						// number of lines in [title].txt

public:
	Book(string title) {				// opens book based on data file
		this->savedTitle = title;
		ifstream file;
		string buffer;
		string buffer2;
		string fName = "../importedBooks/" + title + ".dat";
		file.open(fName.c_str());

		//assert that file stream is valid
		if (file.fail()) {
			cerr << "Error (book.cpp constructor): cannot open file '" + fName
					<< "'" << endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}

		//first line of dat file: currentIndex
		//second line: numLines
		//3rd line: numChapters
		//all following lines until eof in format:
		//chapter x
		//line # chapter x starts

		getline(file, buffer);
		//assert that file is still good after call to getline
		if (file.fail() || file.bad()) {
			cerr << "Error (book.cpp constructor): cannot get currentIndex from dat file"<< endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}
		this->currentIndex = atoi(buffer.c_str());

		getline(file, buffer);
		if (file.fail() || file.bad()) {
			cerr << "Error (book.cpp constructor): cannot get numLines from dat file"<< endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}
		this->numLines = atoi(buffer.c_str());

		getline(file, buffer);
		if (file.fail() || file.bad()) {
			cerr << "Error (book.cpp constructor): cannot get numChapters from dat file"<< endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}
		this->numChapters = atoi(buffer.c_str());

		for (int i = 0; i < this->numChapters; i++) {
			getline(file, buffer);
			getline(file, buffer2);
			if (file.fail() || file.bad()) {
				cerr << "Error (book.cpp constructor): error reading chapters from dat file"<< endl;
				cerr << "Closing Program..." << endl;
				exit(EXIT_FAILURE);
			}
			chapters.push_back(make_pair(buffer, atoi(buffer2.c_str())));
		}
		file.close();
	}

	//getters + setters
	string getTitle() const {
		return this->savedTitle;
	}
	unsigned int getIndex() const {
		return this->currentIndex;
	}
	void setIndex(int newIndex) {
		this->currentIndex = newIndex;
	}
	vector<pair<string, int> > getChapters() const{
		return this->chapters;
	}
	unsigned int getNumLines() const {
		return this->numLines;
	}

	//destructor
	~Book() {
		ofstream file;
		string fName = "../importedBooks/" + this->savedTitle + ".dat";
		file.open(fName.c_str());

		//error check on opening dat file
		if (file.fail()) {
			cerr << "Error (book.cpp destructor): cannot open file '" + fName
					<< "'" << endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}

		//edit dat file to reflect current state of book
		file << this->currentIndex << endl;
		file << this->numLines << endl;
		file << this->numChapters << endl;
		pair<string, int> buffer;
		for (int i = 0; i < this->numChapters; i++) {
			buffer = this->chapters[i];
			file << buffer.first << endl;
			file << buffer.second << endl;
		}
		file.close();
	}
};
#endif
