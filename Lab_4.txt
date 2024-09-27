//============================================================================
// Name        : Lab_4.cpp
// Author      : Kirthika
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void insert_sorted(char[], char, int&);
//
//int main() {
//	ifstream in_stream;
//	ofstream out_stream;
//
//	in_stream.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabInput4-1.txt");
//
//	if(in_stream.fail()){
//		cout << "No such file" << endl;
//		system("pause");
//		exit(100);
//	}
//
//	out_stream.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabOutput4-1.txt");
//
//	char a;
//	char arr[100];
//	int size = 0;
//
//	while(!in_stream.eof()){
//		in_stream >> a;
//		if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
//			a = toupper(a);
//			arr[size] = a;
//			size++;
////			insert_sorted(arr, a, size);
//		}
//	}
//
//	for(int i = 0; i < size; i++){
//		out_stream << arr[i] << endl;
//	}
//
//	in_stream.close();
//	out_stream.close();
//	return 0;
//}

//void insert_sorted(char arr[], char a, int& size){
//	int idx = 0;
//	if(size == 0){
//		arr[idx] = a;
//		size++;
//		return;
//	}
//
//	for(int i = 0; i < size; i++){
//		if(a > arr[i]){
//			idx++;
//		}else{
//			break;
//		}
//	}
//	cout << idx << endl;
//	char temp = arr[idx];
//	arr[idx] = a;
//
//
//	for(int i = idx+1; i < size+1; i++){
//		a = temp;
//		temp = arr[i];
//		arr[i] = a;
//	}
//	size++;
//}

/*
Output:
K
I
R
T
H
I
K
A
H
E
L
L
O
T
H
I
S
I
S
A
S
A
M
P
L
E
T
E
S
T
D
A
T
A
F
I
L
E

 */

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//
//void read_file(int count[]);
//void read_console(int count[]);
//void output(int cout[], int size);
//void insert(int count[], int num);
//
//int main(){
//	char type;
//	cout << "Do you want to enter a list of numbers through the file(f) or console(c): ";
//	cin >> type;
//	int count[11] = {0};
//	int size = 11;
////	for(int i = 0; i < size; i++){
////		cout << count[i] << ", ";
////	}
//	if(type == 'f' || type == 'F'){
//		read_file(count);
//	}else if(type == 'c' || type == 'C'){
//		read_console(count);
//	}
//	output(count, size);
//	return 0;
//}
//
//void read_file(int count[]){
//	string name;
//	cout << "Enter the file Name: ";
//	cin >> name;
//
//	ifstream in_stream;
//
//	in_stream.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/" + name);
//
//	if(in_stream.fail()){
//		cout << "No such file" << endl;
//		system("pause");
//		exit(100);
//	}
//
//	int next;
//	while(in_stream >> next){
//		if(next > 0 && next < 11){
//			insert(count, next);
//		}
//
//	}
//	in_stream.close();
//}
//
//void read_console(int count[]){
//	int num;
//	cout << "Enter a number (1-10) or [-1] to end the  program: ";
//	cin >> num;
//
//	while(num != -1){
//		if(num > 0 && num < 11){
//			insert(count, num);
//		}
//		cout << "Enter a number (1-10) or [-1] to end the  program: ";
//		cin >> num;
//	}
//}
//
//void insert(int count[], int num){
//	count[num] += 1;
//}
//
//void output(int count[], int size){
//	ofstream out_stream;
//	out_stream.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabOutput4-2.txt");
//
//	for(int i = size-1; i > 0; i--){
//		if(count[i] != 0){
//			cout << i << setw(5) << right << count[i] << endl;
//			out_stream << i << setw(5) << right << count[i] << endl;
//		}
//	}
//	out_stream.close();
//
//}

/*
Do you want to enter a list of numbers through the file(f) or console(c): f
Enter the file Name: LabInput4-2.txt
9    1
8    1
7    1
4    2
3    2
1    2
*/

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void combine_files(ifstream&, ifstream&, ofstream& );
//
//int main(){
//	ifstream file1;
//	file1.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabInput4-3.txt");
//
//	if(file1.fail()){
//		cout << "Can not find file";
//		system("pause");
//		exit(100);
//	}
//
//	ifstream file2;
//	file2.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabInput4-4.txt");
//
//	if(file2.fail()){
//		cout << "Can not find file";
//		system("pause");
//			exit(100);
//	}
//
//	ofstream output;
//	output.open("/Users/kirthika/eclipse-workspace-c++/Lab_4/LabOutput4-3.txt");
//
//	combine_files(file1, file2, output);
//
//	return 0;
//}
//
//void combine_files(ifstream& file1, ifstream& file2, ofstream& output){
//	int num1;
//	int num2;
//	bool start = true;
//
//	while(!file1.eof() && !file2.eof()){
//		if(start){
//			file1 >> num1;
//			file2 >> num2;
//			start = false;
//		}else if(num1 < num2){
//			output << num1 << " ";
//			file1 >> num1;
//		}else if(num2 <= num1){
//			output << num2<< " ";
//			file2 >> num2;
//		}
//
//	}
//
//	while(!file1.eof()){
//		file1 >> num1;
//		output << num1 << " ";
//	}
//
//	while(!file2.eof()){
//		file1 >> num2;
//		output << num2 << " ";
//	}
//	file1.close();
//	file2.close();
//	output.close();
//
//}
/*
 * 6 13 15 22 31 33 34 40 52 60 62 76 88 89 99 
 */


