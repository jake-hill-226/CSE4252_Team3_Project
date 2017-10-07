//============================================================================
// Name        : lastn.cpp
// Author      : Joshua Simmerson.4
// Version     : 1.0
// Description : CSE 4252 Lab 2
//============================================================================

#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <limits>
using namespace std;

void testSetup();
void printHeader(string title);
void openFileStream(fstream &stream, char * title, char io);
void printBytes(fstream &in, char * name);
int printLines(fstream &in, char * name);
int getNum(int max);
void tempFileName(char * name);

int main() {

	// restore first.txt to test another run
	//testSetup();// enable for testing

	// open input streams for first.txt and second.txt
	char fileName1[] = "first.txt";
	char fileName2[] = "second.txt";
	fstream firstFileStream;
	openFileStream(firstFileStream, fileName1, 'i');
	fstream secondFileStream;
	openFileStream(secondFileStream, fileName2, 'i');

	// print header and files sizes for first.txt and second.txt
	printHeader("Size:");
	printBytes(firstFileStream, fileName1);
	printBytes(secondFileStream, fileName2);

	// print header and number of lines per file for first.txt and second.txt
	printHeader("Number of lines");
	int firstLines = printLines(firstFileStream, fileName1);
	int secondLines = printLines(secondFileStream, fileName2);
	int minLines = min(firstLines, secondLines);

	printHeader("Modification of first.txt");

	// fill tempFile with lines per user input
	int numEdit = getNum(minLines);
	if (numEdit != 0) {

		// create tempFile to hold output and open stream
		char tempOutName[36];// disable for windows testing
		tempFileName(tempOutName);// disable for windows testing
		//char tempOutName[] = "lastnTEMPoutFILE.txt";// enable for windows testing
		fstream tempOutStream;
		openFileStream(tempOutStream, tempOutName, 'o');

		// fill tempFile per numEdit
		string buffer;
		for (int i = 0; i < firstLines - numEdit; i++) {
			getline(firstFileStream, buffer);
			tempOutStream << buffer << "\n";
		}
		for (int i = 0; i < numEdit - 1; i++) {
			getline(secondFileStream, buffer);
			tempOutStream << buffer << "\n";
		}
		getline(secondFileStream, buffer);
		tempOutStream << buffer;

		// close streams
		tempOutStream.close();
		firstFileStream.close();
		secondFileStream.close();

		// delete fileName1 and replace with tempFile
		remove(fileName1);
		if (rename(tempOutName, fileName1) != 0) {
			cerr << "File renaming " << tempOutName << " to " << fileName1 << "failed";
			exit(11);
		}
	} else {
		// close streams
		firstFileStream.close();
		secondFileStream.close();
	}
	return (0);
}

/*
 Name: testSetup
 Requires: bkup.txt
 Results: bkup.txt copied to new first.txt
 */
void testSetup() {
	remove("first.txt");
	ifstream inF("bkup.txt");
	ofstream outF("first.txt");
	outF << inF.rdbuf();
	inF.close();
	outF.close();
}

/*
 Name: printHeader
 Inputs: string title, title of header
 Output: to console
 *************************
 [title]
 *************************
 */
void printHeader(string title) {
	cout << "***************************************************************\n";
	cout << title << endl;
	cout << "***************************************************************\n";
}

/*
 Name: openFileStream
 Inputs: stream - stream to be opened
 	 	 file 	- name of file to be associated with stream
 	 	 io 	- i for input, o for output
 Result: stream is open to 'file' in mode indicated
 */
void openFileStream(fstream &stream, char * file, char io) {
	if (io == 'i') {
		stream.open(file, fstream::in);
	} else if (io == 'o') {
		stream.open(file, fstream::out);
	}
	if (!stream.is_open()) {
		cerr << "Unable to open file: " << file << endl;
		exit(10);
	}

}

/*
 Name: printBytes
 Inputs: in 	- open ifstream
 	 	 name 	- name of file associated with in
 Output: to console
 	 	 [name]: [ # of bytes in 'in'] Bytes
 */
void printBytes(fstream &in, char * name) {
	in.seekg(0, in.end);
	cout << name << ": " << in.tellg() << " Bytes\n\n";
	in.seekg(0, in.beg);
}

/*
 Name: printLines
 Inputs: in 	- open ifstream
 	 	 name 	- name of file associated with in
 Output: to console
 	 	 [name]: [# of lines in 'in'] Bytes
 Returns: int - # of lines in 'in'
 */
int printLines(fstream &in, char * name) {
	int num = 0;
	string trash;
	while (!in.eof()) {
		getline(in, trash);
		num++;
	}
	cout << name << ": " << num << " Lines\n\n";
	in.clear();
	in.seekg(0, in.beg);
	return num;
}

/*
 Name: getNum
 Inputs: max - maximum value returned
 Returns int - with value v where 0 <= v <= max
 */
int getNum(int max) {
	int num;
	bool isNum = false;
	cout << "Enter value of n: ";
	while (!isNum) {
		if (cin >> num && cin.peek() == '\n' && num >= 0 && num <= max) {
			isNum = true;
		} else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nInvalid entry, please enter a number between 0 and " << max << ": \n";
		}
	}
	return num;
}

/*
 Name: tempFileName
 Inputs: name - pointer to char array with length 36
 Results name - will be a new file name with current date and time, of format:
 				"lastn.temp.Fri Oct 06 16:31:50 2017"
 Warning - returned file name is not windows compatible
  */
void tempFileName(char * name) {
	time_t t = time(NULL);
	string time = ctime(&t);
	string sName = "lastn.temp." + time;
	strcpy(name, sName.c_str());
}
