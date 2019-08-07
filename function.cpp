#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	/*char ch;
	cout << "Enter Character : ";
	cin>>ch;
	if (isdigit(ch))
	{
		cout << "Here is nummeric";
	}
	else{
		if (islower(ch)){
			cout << (char)toupper(ch)<<endl;
		}
		else{
			cout << (char)tolower(ch)<<endl;
		}
		cout  <<"Here is alphabet\n";
	}*/
	//////////////////////////////////////////////////////////////
	/*string str ;
	cout <<"Enter string number : "<<endl;
	cin >> str;
	cout <<atof(str.c_str())+atof(str.c_str())<<endl;*/
	/////////////////////////////////////////////////////////////

	/*
	srand(time(NULL));
	for (int i = 1 ;i<=50;i++){
		cout << 10+rand()%89<<"\t";
		if (i%5==0){
			cout << endl;
		}
	}
	*/
	/*
	char str1[30],str2[30];
	cout <<"Enter string 1 ";
	cin>> str1;
	cout << "Enter string 2 ";
	cin >> str2;
	cout << strcat(str1,str2)<<endl;
	cout << strlen(str1)<<endl;

	cout << str1[1]<<str1[7]<<endl;

	for(int i= strlen(str1)-1 ;i >= 0;i--)
	{
		cout<<str1[i];
		if (isdigit(str1[i])){
			cout<<"<-- here is numeric"<<endl;
		}
		else{
			cout<< "<-- here is character"<<endl;
		}
	}
	*/

	cout << setfill('*')<< setw(20)<< "HI"<<setw(10)<<"Thailand"<<endl;
	cout <<setfill(' ')<<setw(50)<<"OH" <<endl;

	double a= 2.14551, b= 758.32111;
	cout << fixed << setprecision (2)<<a<<setw(20)<<setprecision(3)<< b<<endl;

	return(0);
}