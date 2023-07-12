#include<iostream>
#include<iomanip>
using namespace std ;
 
 
int main()
{
	double x,y,z;
	float f1,f2;
	
	cout<<"Enter the pound = ";
	cin>>x;
	cout<<"\nEnter the shilling = ";
	cin>>y;
	cout<<"\nEnter the pence = ";
	cin>>z;
    f1=(y)/20;
   f2=z/20;
 // setprecision(1)<<f2;
	 std::cout << std::fixed << std::setprecision(1) << f2;
 } 
