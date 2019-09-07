#include<iostream>
#include<string>
using namespace std;
void ListStudent(string stuname[50],int scor[50],int);
char Calgrade(int);

int main()
{
	int stunum,scor[50];
	string stuname[50];
	cout << "Input Number of Student : ";
	cin >> stunum;
	for (int i = 0;i<stunum;i++) {
		cout << "Input Name : ";
		cin >> stuname[i];
		cout << "Input score " << i+1 << " : ";
		cin >> scor[i];
		cout << endl;
	}
	ListStudent(stuname,scor,stunum);
	return(0);
}
void ListStudent(string stuname[50], int scor[50],int num) {
	for (int i = 0 ;i<num;i++) {
		cout << "Student Name : " << stuname[i];
		cout << " Score " << i + 1 << " = " << scor[i];
		cout << "   Your grade is " << Calgrade(scor[i]) << endl;
	}
}
char Calgrade(int scor) {
	char grade;
	if (scor >= 80) {
		grade = 'A';
	}
	else if (scor >= 70) {
		grade = 'B';
	}
	else if (scor >= 60) {
		grade = 'C';
	}
	else if (scor >= 50) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	return(grade);
}
