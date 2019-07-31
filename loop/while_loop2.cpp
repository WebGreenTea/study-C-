#include<iostream>
#include <string>
using namespace std;

int main()
{
	char Ch = ' ';
	int Count = 0;
	int low = 0,up = 0,number = 0,spe = 0;
	string Str;
	cout << "Enter String : ";
	while (cin >> Ch){
		if (Ch >= 'a' && Ch <= 'z'){
			low+=1;
		}
		else if (Ch >= 'A' && Ch <= 'Z'){
			up+=1;
		}
		else if (Ch >= '0' && Ch <= '9'){
			number+=1;
		}
		else if (Ch == '.')break;
		else
			spe+=1;
		Count++;
		Str += Ch;
	}
	cout << "\nLength of string ("<<Str<<") is character"<< Count <<endl;
	cout << "Your Message have " << low << "lower character\n";
	cout << "Your Message have " << up << "upper character\n";
	cout << "Your Message have " << number << "numberic character\n";
	cout << "Your Message have " << spe << "special character\n";
	return(0);
}