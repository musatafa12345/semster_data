#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstring>
using namespace std;


bool add()
{
	int a,b;
	cout<<"Enter the value of 1st nbr"<<endl;
	cin>>a;
	cout<<"Enter the value of 2st nbr"<<endl;
	cin>>b;
	if(a<=b)
	{
	cout<<"A is greter then B";
}
	else if(b<=a)
	{
	cout<<"B is greter then A";
}
}

int main()
{
	add();
}

