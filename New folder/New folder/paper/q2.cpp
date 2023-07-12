#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	int x,y,z;
	x=100;
	y=10;
	z=120;
	cout<<"\n\n";
	cout<<x <<setw(6)<<y<<setw(6)<<z<<"\n\n";
	cout<<x-20<<setw(6)<<y+20<<setw(6)<<z+30<<"\n\n";
	cout<<x-40<<setw(6)<<y+20<<setw(6)<<z+30<<"\n\n ";
}
