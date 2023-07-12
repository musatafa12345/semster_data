#include<iostream>
using namespace std;

void operatordigital()
{
	int n;
	cout<<"Enter 1 for sum"<<endl;
	
	cout<<"Enter 2 for subtraction"<<endl;
	
	cout<<"Enter 3 for multiplication"<<endl;
	
	cout<<"Enter 4 for division"<<endl;
	
	cin>>n;
	
	if(n==1)
	{
	     int e,f;
		cout<<"Enter first number: "<<endl;
		cin>>e;
		cout<<"Enter 2nd number: "<<endl;
		cin>>f;
		cout<<"Sum is this= "<<e+f<<endl;
		}
	 if(n==2)
	 {
	    float g,h;
		cout<<"Enter first number: "<<endl;
		cin>>g;
		cout<<"Enter 2nd number: "<<endl;
		cin>>h;
		cout<<"Subtraction is this= "<<g-h;
    	}
	 if(n==3)
	 {
	 	double i,j;
	cout<<"Enter first number: "<<endl;
		cin>>i;
		cout<<"Enter 2nd number: "<<endl;
		cin>>j;
		cout<<"Multiplication is this= "<<i*j;
		}
	 if(n==4)
	 {
		 	float k,l;
    	cout<<"Enter first number: "<<endl;
		cin>>k;
		cout<<"Enter 2nd number: "<<endl;
		cin>>l;
		cout<<"division is this= "<<k/l;
		}
		
    }
    /////////////////////square////////////////
		void squrevalue()
		{
			int y;
			cout<<"Enter number "<<endl;
			cin>>y;
			cout<<"Sqaure is = "<<y*y;
		}
		/////////////////////////area/////////////
		void Areacircle()
		{
			float pi,r;
			pi=3.14;
			cout<<"Enter radius"<<endl;
			cin>>r;
			cout<<"Area of circle is = "<<pi*r*r;
		}
		/////////////////////////circum/////////////////////////
		void Areacircumference()
		{
			float pi,r;
			pi=3.14;
			cout<<"Enter radius"<<endl;
			cin>>r;
			cout<<"Area of circumference is = "<<2*pi*r;
		}

//////////////////////////main body///////////////////
int main()	
{
					int n;
			cout<<"Enter 1 for operator"<<endl;
			cout<<"Enter 2 for squre "<<endl;
			cout<<"Enter 3 for Area of circle"<<endl;
			cout<<"Enter 4 for Area of circumference "<<endl;
			cin>>n;
			if(n==1)
			{
			operatordigital();
		}
		else if(n==2)
		{
			squrevalue();
		}
		else if(n==3)
		{
			Areacircle();
		}
		 else if(n==4)
		 {
			Areacircumference();
		}
		else
     	{
		    cout<<"You enter invalid number"<<endl;	
	    }
	    return	0;	
	}
	

