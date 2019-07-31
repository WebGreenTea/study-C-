#include <iostream>
using namespace std;

int main()
{
	int lop,num ;
	cout << "Display sqaure of number 1 to X.\n";
	cout << "Enter round";
	cin >> lop;
	cout << "Enter X :";
	cin >> num;
	cout << "================================\n";
	cout << "\tX\tX^2\n";
	cout << "================================\n";
	int X = 1, sum = 0;
	while (X <= lop){
		cout << "\t" << num << "\t" << num*num << endl;
		sum = sum+num*num;
		X++;
		num++;
	}
	cout << "sum = "<< sum << endl;
	return(0);
}