#include<iostream>
using namespace std;

class area{
	
	private :
	double	a,a1;
	double 	r;
	float  pi;
	public :
	area()
	{
		pi=3.14;
	}
	
	void getinput()
	{
		cout<<"Enter the radius ";
		cin>>r;
		a=4*pi*r;
		a1=pi*r*r;
	}
	
	void output()
	{
		cout<<"\nSurface area of the sphere : "<<a;
		cout<<"\narea of circle : "<<a1;
		
	}
	
	
	
};


main()
{
	area a1=area();
	cout<<"**********************\n";
	a1.getinput();
	cout<<"\n**********************";
	a1.output();
	cout<<"\n**********************";

}

