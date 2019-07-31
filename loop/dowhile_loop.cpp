#include <iostream>
using namespace std;

int main()
{
	int choi;
	cout << "Program Calculate Area\n";
	cout << "1. Circle\n";
	cout << "2. Square\n";
	cout << "3. Triangle\n";
	cout << "4. Exit\n";
	do{

	cout << "Enter your choose number: ";
	cin >> choi;
	int r=0 , D=0;
	float base,height;

	if (choi == 1){
		cout << "Enter radius : ";
		cin>>r;
		cout << "Area of circle is "<< 3.14*r*r <<endl;
	}
	else if (choi == 2){
		cout << "Enter side : ";
		cin >> D;
		cout << "Area of square is "<<D*D<<endl;
	}
	else if (choi == 3){
		cout << "Enter base : ";
		cin >> base;
		cout << "Enter height : ";
		cin >> height;
		cout << "Area of triangle is "<<0.5F*base*height<<endl;
	}
	}while(choi != 4);

	return(0);
}