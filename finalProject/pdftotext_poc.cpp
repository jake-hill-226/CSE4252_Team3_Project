#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <limits>
#include <string>
#include <sstream>
#include <sys/stat.h>
#include <queue>

#include <stdlib.h>

#include <stdexcept>
#include <stdio.h>

#include <utility>

using namespace std;



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

void generateMetadata(const char* pdf_path, const char* meta_path, const char* txt_path){
  ostream f_meta(meta_path);
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
    
    txt_contents += buffer;
  }
  
  f_txt.close();
  
  // Create file mapping chapters to page numbers
  string command = "./bookMarkMapper.exe ";
  command.append(pdf_path);
  exec(command.c_str());
  
  fstream f_chapter("./temp_toc.txt");
  if(f_chapter.fail()){
    cout << "Failed to open table of contents file" << endl;
    return;
  }
  
  if(getline(f_chapter, buffer)){
    num_chapters = (int)buffer;
  }
  
  if(num_chapters != 0){
    chapter_map = new pair<string,int>[num_chapters];
    int i = 0;
    while(getline(f_chapter, buffer) and i < num_chapters){
      chapter_map[i].first = buffer; // Set chapter title
      getline(f_chapter, buffer);
      chapter_map[i].second = buffer; // Set chapter page
    }
    
    // match pages with string indecies
    string page;
  }
  f_chapter.close();
  
}

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
  
  // Get the path for the .txt output of pdftotext
  s_path.replace(index, 4, ".txt");
  
  while(s_path[index] != '/' && index > 0){
    index --;
  }
  
  f_export_name = s_path.substr(index+1);

  // Call executable for pdftotext given the input path
  string command = "./pdf2txt -o ./importedBooks" + f_export_name;
  command.append(path);
  
  system(command.c_str());
  
  
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