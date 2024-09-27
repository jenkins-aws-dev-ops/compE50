#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream in_stream;
	ofstream out_stream;

	in_stream.open("HWinput1.txt");

	if(in_stream.fail()){
		cout << "File could not be found." << endl;
		system("pause");
		exit(100);
	}

	out_stream.open("HWoutput1.txt");

    double a;
	double arr[20];
	int size = 0;

    while(!in_stream.eof()){
		in_stream >> a;
		arr[size] = a;
		size++;
	}

    double average = 0;
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += arr[i];
    }

    average = total / size;
    
    out_stream << average << endl;
    
    in_stream.close();
	out_stream.close();

    return 0;
}