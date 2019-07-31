#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int l=0,u=0,num=0,spe=0;
	cout << "Enter String:";
	getline(cin,str);
	cout <<endl<<"Your string enter (10char):" << str << endl;
	cout << "Length of string = "<<str.length()<< endl;
	if (str.length() <= 10){
		for (int n = 0;n < str.length();n++){
			cout <<str.at(n)<<"-";
			if(str.at(n) >= 'a' && str.at(n) <= 'z'){
				l++;
			}
			else if (str.at(n) >= 'A' && str.at(n) <= 'Z'){
				u++;
			}
			else if (str.at(n) >= '0' && str.at(n) >= '9'){
				num++;
			}
			else {
				spe++;
			}
		}
	}
	else {
		cout << "Your String is more than 10 character/n";
	}
	cout << "\nYour string have" << l << "lower character\n";
	cout << "Your string have" << u << "upper character\n";
	cout << "Your string have" << num << "numberic character\n";
	cout << "Your string have" << spe << "special character\n";
	cout << endl;
}