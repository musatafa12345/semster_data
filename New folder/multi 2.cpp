#include<iostream>
using namespace std;

	void squrevalue()
		{
			int y;
			cout<<"Enter number "<<endl;
			cin>>y;
			cout<<"Sqaure is = "<<y*y;
		}
		void Areacircle()
		{
			float pi,r;
			cout<<"Enter pi "<<endl;
			cin>>pi;
			cout<<"Enter radius"<<endl;
			cin>>r;
			cout<<"Area of circle is = "<<pi*r*r;
		}
		void Areacircumference()
		{
			float pi,r;
			cout<<"Enter pi "<<endl;
			cin>>pi;
			cout<<"Enter radius"<<endl;
			cin>>r;
			cout<<"Area of circumference is = "<<2*pi*r;
		}
		 int main()
		{
		
			int n;
			
			cout<<"Enter 1 for squre "<<endl;
			cout<<"Enter 2 for Area of circle"<<endl;
			cout<<"Enter 3 for Area of circumference "<<endl;
			cin>>n;
			if(n==1)
			squrevalue();
		else if(n==2)
			Areacircle();
		 else if(n==3)
			Areacircumference();
		else
		cout<<"You enter invalid number"<<endl;	
			
		}
