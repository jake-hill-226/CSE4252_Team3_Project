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
using namespace std;

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences);

// goto line in input file
void GotoLine(fstream& stream, unsigned int num);

// open library and return titles or create library file if not found
vector<string> openLib();

// close library and save updates
void closeLib(vector<string> library);

int main() {
	vector<string> library = openLib();

/*
	 int numLines = 15;
	 makeTestBook("Title: alpha", numLines);
	 library.push_back("Title: alpha");
	 makeTestBook("Title: beta", numLines);
	 library.push_back("Title: beta");
*/

	closeLib(library);
	return 0;
}

//************************** FOR TESTING AND DEVELOPMENT ******************
void makeTestBook(string title, int numSentences) {
	int chapIndex[5] = { };

	// make text file and record indexes for dat file
	ofstream file;
	string fName = "./importedBooks/" + title + ".txt";
	file.open(fName.c_str());
	int lines = 0;
	// -- write title of book
	file << title << endl;
	lines++;
	file << "intro here if applicable" << endl;
	lines++;
	// -- write book
	for (int i = 0; i < 5; i++) {
		file << "Chapter #" << i << ' ' << endl;
		lines++;
		chapIndex[i] = lines;
		for (int j = 0; j < numSentences; j++) {
			file << "This here is sentence number " << j << " of chapter " << i
					<< '.' << endl;
			lines++;
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
// goto line in input file
void GotoLine(fstream& stream, unsigned int num) {
	stream.seekg(stream.beg);
	for (unsigned int i = 0; i < num - 1; ++i) {
		stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

}

// open library and return titles or create library file if not found
vector<string> openLib() {
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
void closeLib(vector<string> library) {
	string fName = "./importedBooks/library.dat";
	ofstream file(fName.c_str());
	for (unsigned int i = 0; i < library.size(); i++) {
		file << library[i] << endl;
	}
}
