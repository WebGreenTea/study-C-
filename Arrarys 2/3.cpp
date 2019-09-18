#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void calprice(float price[5][3]);
void display(string name[5],float price[5][3]);
int main(){
	string name[5];
	float price[5][3];
	for(int r= 0;r<5;r++){
		cout << "Enter Product Name : ";
		cin >> name[r];
		cout << "\tprice : ";
		cin >> price[r][0];

	}
	calprice(price);
	display(name,price);
	return(0);
}

void calprice(float price[5][3]){
	for(int r = 0;r<5;r++){
		price[r][1] = price[r][0]*0.07; 
	}
	for(int r = 0;r<5;r++){
		price[r][2] = price[r][1]+price[r][0];
	}
}

void display(string name[5],float price[5][3]){
	cout <<"No.\tProduct\t\tprice\tvat7%\tNet\n";
	for(int r=0 ;r<5;r++){
		if(name[r].length() <=7){
			cout <<" "<<r+1<<"\t"<<name[r]<<"\t\t";
		}
		else{
			cout <<" "<<r+1<<"\t"<<name[r]<<"\t";
		}
		for(int c=0;c<3;c++){
			cout <<fixed<<setprecision(2)<< price[r][c]<<"\t";
		}
		cout <<endl;
	}
}