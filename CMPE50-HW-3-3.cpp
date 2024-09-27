#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

void outputLine (const string, double, double, double, double, double, ofstream&);

int main () {
    ifstream in_stream;
	ofstream out_stream;

	in_stream.open("HWinputGrades.txt");
    

	if(in_stream.fail()){
		cout << "File could not be found.\n";
		system("pause");
		exit(100);
	}

	out_stream.open("HWoutputGrades.txt");

    char lastName[20]; //each last name can be 20 characters long.
	double score[5]; //5 scores for each person
	int counter = 0;

    while (in_stream >> lastName >> score[0] >> score[1] >> score[2] >> score[3] >> score[4]) {
        counter++;
        out_stream << counter << ". ";
        outputLine(lastName, score[0], score[1], score[2], score[3], score[4], out_stream);
    }


    // for (int i = 0; i < counter; i++) {
    //     out_stream << arr[i] << "\n";
    // }
    
    in_stream.close();
	out_stream.close();

    return 0;
}

void outputLine (const string name, double score1, double score2, double score3, double score4, double score5, ofstream& out_stream) {
    out_stream << left << setw(10) << name << setw(8) << right << score1 << setw(8) << right << score2 << setw(8) << right << score3 << setw(8) << right << score4 << setw(8) << right << score5 << "\n";

}