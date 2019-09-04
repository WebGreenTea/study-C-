#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void print_arr(string name[4],int num[4]);
void find_max(int vals[4]);

int main(){
	int num[4];
	string name[4];
	for(int i = 0;i<4;i++){
		cout << "Enter name[" << i <<"]: ";
		cin >> name[i];
		cout << "Enter num[" << i <<"]: ";
		cin >> num[i];
	}
	print_arr(name,num);
	find_max(num);
	return(0);
}

void print_arr(string name[4],int num[4]){
	float sum=0,aver=0;
	cout << "------------------------\n";
	cout << "name\t\tscore\n";
	cout << "------------------------\n";
	for(int i = 0;i<4;i++){
		cout <<name[i]<<"\t\t"<<num[i]<<endl;
		sum+=num[i];
	}
	cout << "---------------------\n";
	aver = sum/4;
	cout << "Average score = "<<fixed<<setprecision(2)<< aver <<endl;
}

void find_max(int vals[4]){
	int temp = 0;
	for(int n=0;n<3;n++){
		for(int i=0;i<3;i++){
			if (vals[i]>vals[i+1]){
				temp = vals[i+1];
				vals[i+1] = vals[i];
				vals[i] = temp;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout << vals[i]<<", ";
	}
	cout << "\nMaximum value is "<<vals[3]<<endl;
}