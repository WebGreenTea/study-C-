#include<iostream>
using namespace std;

int main()
{
	int stu,sco,gad=0;
	cout<<"Please enter number of studen :";
	cin>>stu;
	for (int i = 1;i<=stu;i++){
		cout<<"Please enter score :";
		cin>>sco;
		if(sco <= 100 && sco >=80){
			gad = gad+4;
			cout <<"your grade = 4"<<endl;
		}
		else if (sco <= 79 && sco >=70){
			gad = gad+3;
			cout<< "your grade = 3"<<endl;
		}
		else if (sco <= 69 && sco >=60){
			gad = gad+2;
			cout<< "your grade = 2"<<endl;
		}
		else if (sco <= 59 && sco >=50){
			gad = gad+1;
			cout<< "your grade = 1"<<endl;
		}
		else{
			cout<< "your grade = 0"<<endl;
		}
	}
	cout<<"class average : "<<gad/stu<<endl;

	return(0);
}