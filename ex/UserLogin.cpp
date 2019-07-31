#include<iostream>
#include<string>
using namespace std;

int main()
{
	string user1, pass1, user2,pass2;
	char choi;
	bool menuchoi = 0;
	do {
		bool inchoi = 0;
		cout << "////////////////////menu////////////////////\n";
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "Q.Exit Program\n";
		cout << "____________________________________\n";
		do {
			cout << "Enter menu: ";
			cin >> choi;
			if (choi == '1') {
				cout << "********Register********\n";
				cout << "Input Username : ";
				cin >> user1;
				cout << "Input Password : ";
				cin >> pass1;
				inchoi = 0;
				menuchoi = 1;
			}
			else if (choi == '2') {
				bool Lmenu = 0;
				cout << "********Login********\n";
				do {
					cout << "Input Username : ";
					cin >> user2;
					cout << "Input Password : ";
					cin >> pass2;
					if (user1 == user2 && pass1 == pass2) {
						cout << "Username or Password correct ^___^\n";
						Lmenu = 0;
					}
					else {
						cout << "!!!!Username or Password incorrect Please try again!!!!\n";
						Lmenu = 1;
					}
				} while (Lmenu == 1);
				inchoi = 0;
				menuchoi = 1;
			}
			else if (choi == 'Q' || choi == 'q') {
				cout << "Exit Program...\n";
				inchoi = 0;
				menuchoi = 0;
			}
			else {
				inchoi = 1;
			}
		} while (inchoi == 1);

		
	} while (menuchoi == 1);
	return(0);
}
