#include<iostream>
#include<string>
using namespace std;

class car
{
	public:
		string brand;
		string model;
		int    year;
	
};

int main()
{
	car carobj1;
	carobj1.brand="BMW";
	carobj1.model="X5";
	carobj1.year= 2009;
	
	
	car carobj2;
	carobj2.brand="civic";
	carobj2.model="c9";
	carobj2.year=2020;
	
	cout<<carobj1.brand<<""<<carobj1.model<<""<<carobj1.year<<"\n";
	cout<<carobj2.brand<<""<<carobj2.model<<""<<carobj2.year<<"\n";
	
	return 0;
	
}


