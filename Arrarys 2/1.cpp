#include<iostream>
using namespace std;


int main(){
	int A[2][2],B[2][2];
	cout << "Enter matrix A : "<<endl;
	for(int i = 0 ;i < 2;i++){
		for(int j = 0 ;j<2;j++){
			cin >> A[i][j];
		}
		//cout<<endl;
	}

	cout << "Enter matrix B : "<<endl;
	for(int i =0;i<2;i++){
		for(int j = 0 ;j<2;j++){
			cin >> B[i][j];
		}
		//cout<<endl;
	}
	cout << "Matrix A+B"<<endl;
	for(int i =0;i<2;i++){
		for(int j = 0;j<2;j++){
			cout << A[i][j] + B[i][j] << " ";
		}
		cout<<endl;
	}
	return(0);
}