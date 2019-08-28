#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*[1]
void ParseName(string &FirstName,string &LastName,const string FullName);

int main()
{
	string Name = "Strousetrup, Bjarne";
	string LastName, FirstName;

	ParseName(FirstName,LastName,Name);
	Name = FirstName + " " + LastName;
	cout << "Name : " << Name << endl;
	return(0);
}

void ParseName(string &First,string &Last, const string FullName)
{
	int I = FullName.find(",");
	Last = FullName.substr(0,I);
	First = FullName.substr(I+2,FullName.size());
}*/

/*[2]
int sum(int, int, int z=0, int w=0);
int main()
{
	cout << sum(10,15) << endl;
	cout << sum(10,15,25)<<endl;
	cout << sum(10,15,25,30) <<endl;
	return(0);
}

int sum(int x,int y,int z, int w)
{
	return(x + y + z + w);
}*/

void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float Widht);
float Area(const double Base,const double height);

int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1'){
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = "<< fixed;
			cout << setprecision(2) << Area(Radius) <<endl;
		}
		else if (Choice == '2'){
			float Length,Widht;
			cout << "Enter length and width : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = "<< fixed;
			cout << setprecision(2) << Area(Length,Widht);
			cout << endl;
		}
		else if (Choice == '3'){
			double Base,height;
			cout << "Enter base and height : ";
			cin >> Base >> height;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(Base,height);
			cout << endl;
		}
		else if (Choice == '4'){
			Flag = false;
		}
		else{
			cout << "\nYou Choose out of range is ";
			cout << "not process\n";
		}
	}while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	return(0);
}

float Area(const float Radius)
{
	return(3.14159F*Radius*Radius);
}

float Area(const float Length,const float Widht)
{
	return(Length * Widht);
}

float Area(const double Base,const double height)
{
	return(0.5*Base*height);
}

void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << "  1.Circle " << endl;
	cout << "  2.Rectangle" <<endl;
	cout << "  3.Triangle" << endl;
	cout << "  4.Exit" <<endl;
	cout << "Enter your choose number: ";
}