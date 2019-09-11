#include<iostream>
using namespace std;
void display(int *salary,int num);
int cal_bonus(int salary);

int main(){
	int num;
	cout << "Enter Number of person : ";
	cin >> num;
	int *salary = new int[num];
	for (int i = 0;i<num;i++){
		cout << "Enter the salary " << i+1 << " : " ;
		cin >> salary[i];
	}
	display(salary,num);
	return(0);
}

void display(int *salary,int num){
	cout << "------------------------------------------\n";
	cout << "There are "<< num << " persons.\n";
	
	for(int i = 0;i<num;i++){
		cout << "The Salary for person " << i+1 << " = " << salary[i];
		cout << "   and Bonus  = " << cal_bonus(salary[i])<<endl;
	}
	cout << "------------------------------------------\n";
}


int cal_bonus(int salary){
	int bonus;
	bonus = salary*2;
	return(bonus);
}