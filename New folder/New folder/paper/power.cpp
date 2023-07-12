#include<iostream>
using namespace std;


double power(double a,int b=2)
{
	double x = 1;
	for(int i = 1; i <= b; i++)
		x = x * a;
	return x;
}

int main()
{
	int p;
	double n,r;
	cout<<"\n\n";
	cout << "\t\tEnter number : ";
	cin >> n;
	cout << "\t\tEnter exponent : ";
	cin >> p;
	r = power(n,p);
	cout << "\t\tResult is = " << r<<endl;
	r = power(n);
	cout << "\t\tMultiply of number and  exponent is = " << r<<endl;
	
	system("pause");
	return 0;
}



