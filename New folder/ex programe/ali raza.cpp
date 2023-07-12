#include<iostream>
#include<cmath>
using namespace std ;

////////////////////////////sum//////////
int sum(int a,int b)
{
	return a+b;
}
//////////////////divid//////////////////
int divid(int a,int b)
{
	return a-b;
}
///////////////////division////////////////
float division(float a,float b)
{
	return a/b;
}
//////////////////////////multiply///////////////////
double multiply(double a,double b)
{
	return a*b;
	
}



main()
{
	int ch;
	cout<<"Enter 1 for sum";
	cout<<"Enter 2 for division";
	cout<<"Enter 3 for divided";
	cout<<"Enter 4 for multiply";
	cin>>ch;
	switch(ch)
	case 1:
		{
			int x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			sum(x,y);
			
		}
}
