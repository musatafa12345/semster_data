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
	cout<<"\nEnter 2 for division";
	cout<<"\nEnter 3 for divided";
	cout<<"\nEnter 4 for multiply"<<endl;
	cin>>ch;
	switch(ch)
	{
	
	case 1:
		{
			int x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			cout<<sum(x,y);
			
		}
		break;
			case 2:
		{
			float x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			cout<<division(x,y);
			
		}
		break;
			case 3:
		{
			int x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			cout<<divid(x,y);
			
		}
		break;
			case 4:
		{
			double x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			cout<<multiply(x,y);
		}	
		break;
	}
}
