#include <iostream>
using namespace std;

int main()
{
	int num;
	cout <<"please enter number : ";
	cin >> num;
	for(int n = 1 ; n<=num ; n++){
		if (n%2 == 0 ){
			cout <<"-\t";
		}
		else
			cout <<"*\t";
	}
	return(0);
}