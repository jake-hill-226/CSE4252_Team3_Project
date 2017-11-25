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
	int status;
  const char* path = "../Test_PDF_Files/SweatingCandles.pdf";
  string f_export_name;
  fstream f_export;


	try{
    string s_path(path);
    
    string command = "pdftotext -nopgbrk ";
    command.append(path);
    
    cout << command << endl;
		status = system(command.c_str());
    
    
    
    int i = s_path.find(".pdf");
    
    if(i == string::npos){
      return 0;
    }
    
    s_path.replace(i, 4, ".txt");
    
    while(s_path[i] != '/' && i > 0){
      i --;
    }
    
    f_export_name = s_path.substr(i+1);
    cout << "TESTING: exported file name: " << f_export_name << endl;
    
    f_export.open(s_path.c_str());
    
    if(f_export.fail()){
      cout << ".txt failed to be instantiated";
      return -1;
    }
    
    stringstream export_content;
    string buffer;
    while(getline(f_export, buffer)){
      export_content << buffer;
      export_content << endl;
    }
    f_export.close();
    
    ofstream f_new_book(f_export_name.c_str());
    
    if(f_new_book.fail()){
      cout << "Failed to create new file" << endl;
    }
    
    f_new_book << export_content.str();
    
    f_new_book.close();
    
    // command.append(s_path);

    // command.append(" ./");
    
    // cout << command << endl;
    
    // system(command.c_str());
    
	} catch(const std::exception& e) {
		cout << "Failed to read file";
	}

	return 0;
}



/*
const std::string s = "/home/toto/FILE_mysymbol_EVENT.DAT";
    std::regex rgx(".*FILE_(\\w+)_EVENT\\.DAT.*");
    std::smatch match;

    if (std::regex_search(s.begin(), s.end(), match, rgx))
        std::cout << "match: " << match[1] << '\n';
*/