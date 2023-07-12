#include <iostream>
using namespace std ;


main()
{
	double month,day;
	int year;
	
	cout<<"Enter the age in day : "<<endl;
	cin>>day;
	year=day/365;
	month=year*12;
	cout<<"your age in year : "<<year<<endl;
	cout<<"your age in month : "<<month;
		
}
