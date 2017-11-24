//============================================================================
// Name        : book.cpp
// Author      : Joshua Simmerson
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

public:
	Book(string title) {				// opens book based on data file
		savedTitle = title;
		ifstream file;
		string buffer;
		string buffer2;
		string fName = "./importedBooks/" + title + ".dat";
		file.open(fName.c_str());

		if (file.fail()) {
			cerr << "Error (book.cpp constructor): cannot open file '" + fName << "'" <<endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}

		//ALEX TODO: getline error checking
		getline(file, buffer);
		currentIndex = atoi(buffer.c_str());
		getline(file, buffer);
		numChapters = atoi(buffer.c_str());
		for (int i = 0; i < numChapters; i++) {
			getline(file, buffer);
			getline(file, buffer2);
			chapters.push_back(make_pair(buffer, atoi(buffer2.c_str())));
		}
		file.close();
	}
	string getTitle() const {
		return this->savedTitle;
	}
	unsigned int getIndex() const {
		return this->currentIndex;
	}
	void setIndex(int newIndex) {
		currentIndex = newIndex;
	}

	~Book() {
		ofstream file;
		string fName = "./importedBooks/" + this->savedTitle + ".dat";
		file.open(fName.c_str());

		if (file.fail()) {
			cerr << "Error (book.cpp destructor): cannot open file '" + fName << "'" <<endl;
			cerr << "Closing Program..." << endl;
			exit(EXIT_FAILURE);
		}

		file << this->currentIndex << endl;
		file << this->numChapters << endl;
		pair<string, int> buffer;
		for (int i = 0; i < this->numChapters; i++) {
			buffer = chapters[i];
			file << buffer.first << endl;
			file << buffer.second << endl;
		}
		file.close();
	}
};
#endif
