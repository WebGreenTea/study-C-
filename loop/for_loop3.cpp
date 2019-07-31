#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	for(int i = num ; i >= 1;i--){
		for(int I = i; I>= 1 ;I--){
			cout<<"*";
		}
		cout<<endl;
	}
}