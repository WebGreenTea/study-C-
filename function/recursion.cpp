#include <iostream>
using namespace std;

int Factorial(int n)
{
	int f;
	if (n == 1)
		f = 1;
	else
		f = n*Factorial(n-1);
	cout << n << "! = "<<f<<endl;
	return f;
}

int main()
{
	int x;
	x = Factorial(4);
	cout << x << endl;
	return(0);
}
/*#include <iostream>
using namespace std;
float calAm(float ,int);
int main()
{
	float deposit,total,sumtotal = 0;
	int year;
	cout <<"Khoayai Bank Information System **Interest = 3%\n";
	for (int i = 1;i<=3;i++){
		cout << "Input Amount "<< i << " : ";
		cin >> deposit;
		cout << "Input Year "<< i << " : ";
		cin >> year;
		total = calAm(deposit,year);
		cout << "Total your money "<< i <<" : " << total << endl;
		cout << "***************************************\n";
		sumtotal += total;
	}
	cout << "Total 3 people = " << sumtotal << endl;
	cout << "\n___________________________\n";
	return(0);
}
float calAm(float deposit,int year)
{
	return(((deposit*0.03)*year)+deposit);
}*/