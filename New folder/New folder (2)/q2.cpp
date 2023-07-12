#include<iostream>
using namespace std;

double const pi=3.14;

void area(int* r)
{
	int x,y;
	y=(*r)*(*r);
	x=pi*y;
	cout<<x;
	
}

void cum(int* r)
{
	int x;
	x=2*pi*(*r);
	cout<<x;
	
	
}

int main()
{
	int a;
	cout<<"enter radius = ";
	cin>>a;
	area(&a);
	cout<<endl;
	cum(&a);
}
