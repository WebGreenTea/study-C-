#include<iostream>
using namespace std;

int main(){
	int score[2][3];
	for (int i = 0;i<2;i++){
		cout << "input subtest " << i+1 <<" : ";
		cin >> score[i][0];
		cout << "input midterm " << i+1 <<" : ";
		cin >> score[i][1];
		cout << "input final " << i+1 <<" : ";
		cin >> score[i][2];
		cout << endl;
		
	}
	cout << "Display score"<<endl;
	cout << "-----------------------------"<<endl;
	cout << "Subtest\tMidterm\tFinal\tTotal"<<endl;
	cout << "-----------------------------"<<endl;
	for (int i = 0;i<2;i++){
		int total = 0;
		for (int j = 0;j<3;j++){
			cout << score[i][j]<<"\t";
			total+=score[i][j];
		}
		cout << total;
		cout <<endl;
	}
	return(0);
}