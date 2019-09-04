#include<iostream>
using namespace std;

int main()
{
	int a[10] = {99,19,1,23,0,15,10,23,-26,-9};
	int temp = 0;
	//int max = a[0];
	//int min = a[0];
	for(int i=0;i<9;i++){
		for(int i=0;i<9;i++){
			if (a[i]>a[i+1]){
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(int n=0;n<=9;n++)
	{
		cout << a[n]<<" ";
	}
	//cout << a[0]<<" "<<
	//cout <<a[]
	cout<<"Maximum value is "<<a[9]<<endl;
	//cout <<"Minimum value is"<<min<<endl;
	return(0);
}