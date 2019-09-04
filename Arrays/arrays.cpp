#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int num[4],i;
	float aver = 0,sum=0;
	string name[4];
	/*for (int i = 0;i<4;i++)
	{
		cout << "Enter name["<<i<<"]:";
		cin>>name[i];
	}*/
	for(int i = 0 ; i<4;i++)
	{
		cout << "Enter name["<<i<<"]:";
		cin>>name[i];
		cout << "Enter num ["<<i<<"]:";
		cin>>num[i];
		
	}
	cout << "------------------------\n";
	cout << "name\t\tscore\n";
	cout << "------------------------\n";
	for(i = 0;i<4;i++){
		cout <<name[i]<<"\t\t"<<num[i]<<endl;
		sum+=num[i];
	}
	cout << "---------------------\n";
	aver = sum/4;
	cout << "Average score = "<<fixed<<setprecision(2)<< aver <<endl;
	system("pause");
	return(0);
}