#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
	string name1,name2,name3;
	int x,y,z;
	name1= " mustafa khan";name2="fakhar ali";name3="bilal";
	x = 6504320;y=24243;z=765422;
	cout<<"\n\n\t\t"<<name1<<setw(20)<<setfill('*')<<x<<endl;
	cout<<"\n\n\t\t"<<name2<<setw(25)<<setfill('@')<<y<<endl;
	cout<<"\n\n\t\t"<<name3<<setw(30)<<setfill('#')<<z<<endl<<endl;
	
	return 0;
}
