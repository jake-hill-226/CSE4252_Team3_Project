#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

void print_banner(string);

int main(){

	ifstream first_in ("first.txt");
	ifstream second_in ("second.txt");

	/*
		Find size of first.txt and second.txt
	 */
	int file_size;

	first_in.seekg(0, ios_base::end);
	file_size = first_in.tellg();

	print_banner("Size");
	cout << "Size of 'first.txt': " << file_size << endl << endl;

	second_in.seekg(0, ios_base::end);
	file_size = second_in.tellg();
	cout << "Size of 'second.txt': " << file_size << endl << endl;

	first_in.seekg(0, ios_base::beg);
	second_in.seekg(0, ios_base::beg);

	/*
		Find how many lines each file has
	 */
	
	string curr_line;
	int num_lines_first = 0;
	int num_lines_second = 0;

	while(getline(first_in, curr_line)){
		num_lines_first ++;
	}

	print_banner("Number of Lines");
	cout << "Number of lines first.txt: " << num_lines_first << endl << endl;

	while(getline(second_in, curr_line)){
		num_lines_second ++;
	}

	cout << "Number of lines second.txt: " << num_lines_second << endl << endl;

	first_in.close();
	second_in.close();
	second_in.open("second.txt");

	/*
		Swap n lines beteween first and second
	 */
	print_banner("Modification of first.txt");

	fstream first_f ("first.txt");
	stringstream s_stream;

	int n_lines;
	cout << "Enter value for n: ";
	cin >> n_lines;

	if(n_lines > num_lines_second){
		while(n_lines > num_lines_second){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "ERROR: More lines than second.txt has." << endl
					<< "Enter value for n: ";
			cin >> n_lines;
		}
	}

	/* 
		Read n lines of second.txt
	*/
	curr_line = "";
	for(int i = 0; i < n_lines; i ++){
		getline(second_in, curr_line);
		s_stream << curr_line.data() << endl;
	}

	second_in.close();

	/* 
		Replace last n lines of first.txt
	*/	
	ofstream temp("temp.txt");
	first_f.seekg(0, ios_base::beg);
	string first_fname = "first.txt";
	string temp_fname = "temp.txt";
	const char * fname_p = first_fname.c_str();
	const char * temp_p = temp_fname.c_str();

	if(n_lines > num_lines_first){
		// Completely overwrite first.txt		
		temp << s_stream.str();

	}else{
		for(int i = 0; i < num_lines_first - n_lines; i++){
			getline(first_f, curr_line);
		}
		first_f.seekg(0, ios_base::cur);
		first_f << s_stream.str();

		int curr_pos = first_f.tellg();
		first_f.seekg(0, ios_base::end);

		// Check for residue left in first.txt
		if(curr_pos != first_f.tellg()){
			ofstream temp("temp.txt");
			first_f.seekg(0, ios_base::beg);

			if(!temp){
				cerr << "ERROR: temp does not exist";
				return 1;
			}

			for(int i = 0; i < num_lines_first; i++){
				getline(first_f, curr_line);

				temp << curr_line << endl;
			}
			string first_fname = "first.txt";
			string temp_fname = "temp.txt";
			const char * fname_p = first_fname.c_str();
			const char * temp_p = temp_fname.c_str();
		}
	}

	first_f.close();
	temp.close();

	remove(fname_p);
	rename(temp_p, fname_p);

	return 0;
}

void print_banner(string message){
	cout << "*********************************************************" << endl
		 << message << endl
		 << "*********************************************************" << endl;
}