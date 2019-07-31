#include <iostream>
using namespace std;

int main()
{
	int num1,num2,sum,total=0;

	cout << "input first number : ";
	cin >> num1;
	cout << "input second number : ";
	cin >> num2;


	for(int i = 1; i <= num2 ;i++){
		sum = num1*i;
		cout << num1<<"*"<<i<<"="<<sum<<endl;
		total = total+(num1*i);
	}
	cout << total<<endl;
	return 0;
}