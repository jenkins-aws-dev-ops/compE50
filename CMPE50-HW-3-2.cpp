#include <iostream>
#include <fstream>
using namespace std;

void sortTwoFiles(ifstream& file1, ifstream& file2, ofstream& output) {
	int num1;
	int num2;
	bool start = true;

	while(!file1.eof() && !file2.eof()){
		if(start){
			file1 >> num1;
			file2 >> num2;
			start = false;
		}else if(num1 < num2){
			output << num1 << " ";
			file1 >> num1;
		}else if(num2 <= num1){
			output << num2<< " ";
			file2 >> num2;
		}

	}

	while(!file1.eof()){
		file1 >> num1;
		output << num1 << " ";
	}

	while(!file2.eof()){
		file1 >> num2;
		output << num2 << " ";
	}
}

void  closeFiles(ifstream& file1, ifstream& file2, ofstream& output) {
    file1.close();
	file2.close();
	output.close();
}

int main () {
    ifstream file1;
	file1.open("HWinput2.txt");

	if(file1.fail()){
		cout << "File could not be found.\n";
		system("pause");
		exit(100);
	}

	ifstream file2;
	file2.open("HWinput3.txt");

	if(file2.fail()){
		cout << "File could not be found.\n";
		system("pause");
			exit(100);
	}

	ofstream output;
	output.open("HWoutput2.txt");

	sortTwoFiles(file1, file2, output);

    return 0;
}