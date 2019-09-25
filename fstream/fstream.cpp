#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;

int main(){
	string Filename;
	ifstream InFile;
	ofstream OutFile;
	int Value;
	srand(time(0));
	cout << "Enter file name : ";
	cin >> Filename;
	cout << endl;

	OutFile.open(Filename.c_str(),ios_base::out|ios_base::app);
	cout << "Now open file "<<Filename << " for write" << endl;

	for(int n = 1;n <= 10;n++){
		Value = rand()%100;
		cout << setw(5) << Value;
		OutFile << Value << " ";
	}
	///
	OutFile <<endl;

	cout <<endl;
	OutFile.close();

	cout << "Now close file " << Filename << ".\n\n";
	InFile.open(Filename.c_str());
	cout << "Now open file " << Filename << " for read."<<endl;


	InFile >> Value;
	while(!InFile.eof()){
		cout << setw(5) << Value <<endl;
		InFile >> Value;
	}

	/*
	for(int n =1;n<=10;n++){
		InFile >> Value;
		cout << setw(5) << Value;
	}*/


	cout << endl;
	InFile.close();
	cout << "Now close file" << Filename << ".\n\n";
	return(0);
}