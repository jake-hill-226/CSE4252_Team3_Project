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
  
  f_meta << curr_index << endl
         << num_lines << endl
         << num_chapters << endl;
  for(int i = 0; i < num_chapters; i++){
    f_meta << chapter_map[i].first << endl
           << chapter_map[i].second << endl;
  }
  
  f_meta.close();
       
  delete[] chapter_map;
}

int main(){
  const char* path = "../Test_PDF_Files/gatsby.pdf";
  
  
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
  string command = "./pdf2txt.exe -o ./importedBooks/" + f_export_name + " ";
  command.append(path);
  system(command.c_str());
  
  
  // Check if pdftotext successfully exported a .txt
  string txt_path = "./importedBooks/" + f_export_name;
  f_export.open(txt_path.c_str());
  
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
  
  generateMetadata(path, txt_path.c_str(), "./test.dat");

	return 0;
}



/*
const std::string s = "/home/toto/FILE_mysymbol_EVENT.DAT";
    std::regex rgx(".*FILE_(\\w+)_EVENT\\.DAT.*");
    std::smatch match;

    if (std::regex_search(s.begin(), s.end(), match, rgx))
        std::cout << "match: " << match[1] << '\n';
*/