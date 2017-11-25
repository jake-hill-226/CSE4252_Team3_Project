#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int status;

	try{
		status = system("../xpdf-tools-win-4.00/bin32/pdftotext.exe ../../Test_PDF_Files/SweatingCandles.pdf");
	} catch(const std::exception& e) {
		cout << "Failed to read file";
	}

	return 0;
}