#include<iostream>
using namespace std;
void display(int nums[10][10]);
void pow2(int nums[10][10]);
void input(int nums[10][10]);

int row ,col;

int main(){
	int val[10][10];
	input(val);
	display(val);
	pow2(val);
	return(0);
}

void input(int val[10][10]){
	cout <<"Enter row : ";
	cin>>row;
	cout <<"Enter column : ";
	cin>>col;
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout <<"Enter value : ";
			cin>>val[i][j];
		}
	}
}

void display (int nums[10][10]){
	for(int row_num =0 ;row_num < row;row_num++){
		for(int col_num = 0;col_num < col;col_num++){
			cout << nums[row_num][col_num]<<" ";
		}
		cout <<endl;
	}
}

void pow2(int nums[10][10]){
	cout << "**** *value * value *****"<<endl;
	for(int row_num =0 ;row_num < row;row_num++){
		for(int col_num = 0;col_num < col;col_num++){
			cout << nums[row_num][col_num]*nums[row_num][col_num]<<"\t";
		}
		cout <<endl;
	}
}