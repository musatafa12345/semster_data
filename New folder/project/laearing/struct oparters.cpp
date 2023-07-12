#include<iostream>
using namespace std;

struct oparater{
	int addition;
	int  subtraction; 
	double multiplication;
	float division;
	
};


main()
{
	oparater p1;
	double sum;
	
	cout<<"enter two value : ";
	cin>>p1.addition>>p1.addition;
	sum=p1.addition+p1.addition;
	cout<<"addition"<<sum;
	
	cout<<"\n\nenter two value : ";
	cin>>p1.division>>p1.division;
	sum=p1.division/p1.division;
	cout<<"\n\ndivision"<<sum;
	
	cout<<"\n\nenter two value : ";
	cin>>p1.subtraction>>p1.subtraction;
	sum=p1.subtraction-p1.subtraction;
	cout<<"\n\nsubtraction"<<sum;
	
	cout<<"\n\nenter two value : ";
	cin>>p1.multiplication>>p1.multiplication;
	sum=p1.multiplication*p1.multiplication;
	cout<<"\n\nmultiplication"<<sum;

}

