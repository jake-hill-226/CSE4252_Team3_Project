#ifndef BOOKREADER_H_
#define BOOKREADER_H_

#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <limits>
#include <string>
#include <sys/stat.h>
#include <queue>
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

// get user inputs to import book and calls sub function per file type
void importBook(priority_queue<string> & library);

// Imports a given txt file and the metadata via .dat if exists
string importTXT(const char* path);

#endif
