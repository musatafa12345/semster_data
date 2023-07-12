#include<iostream>
using namespace std;

main()
{
	int latex,myler;
	double a,b,price1,price2 ,total=0;
	cout<<"Enter the number of latex bollons you buy : ";
	cin>>latex;
	cout<<"\nEnter the price of latex bllons : ";
	cin>>price1;
	cout<<"\nEnter the number of myler bollons you buy : ";
	cin>>myler;
	cout<<"\nEnter the price of myler bllons : ";
	cin>>price2;
	a=price1*latex;
	b=price2*myler;
	cout<<"\nThe total price of latex bollons : "<<a;
	cout<<"\nThe total price of myler bollons : "<<b;
	total=a+b;
	cout<<"\n\nTotal bill your's : "<<total;
	
}

