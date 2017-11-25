#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <limits>
#include <string>
#include <sstream>
#include <sys/stat.h>
#include <queue>

#include <stdlib.h>

using namespace std;


int main(){
  const char* path = "../Test_PDF_Files/SweatingCandles.pdf";
  
  
  string f_export_name;
  fstream f_export;
  
  // Allow for manipulation of path via string methods
  string s_path(path);
  
  // Check if path is to .pdf file
  int index = s_path.find(".pdf");
  
  if(index == string::npos){
    cout << "Path chosen does not point to a .pdf file" << endl;
    return 0;
  }

  // Call executable for pdftotext given the input path
  string command = "pdftotext -nopgbrk ";
  command.append(path);
  
  cout << command << endl;
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

	return 0;
}



/*
const std::string s = "/home/toto/FILE_mysymbol_EVENT.DAT";
    std::regex rgx(".*FILE_(\\w+)_EVENT\\.DAT.*");
    std::smatch match;

    if (std::regex_search(s.begin(), s.end(), match, rgx))
        std::cout << "match: " << match[1] << '\n';
*/