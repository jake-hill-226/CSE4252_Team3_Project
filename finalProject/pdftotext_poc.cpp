#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int status;

	try{
    cout << "Executing pdftotext..." << endl;
    
		status = system("pdftotext ../Test_PDF_Files/SweatingCandles.pdf");
    
    
	} catch(const std::exception& e) {
		cout << "Failed to read file";
	}

	return 0;
}