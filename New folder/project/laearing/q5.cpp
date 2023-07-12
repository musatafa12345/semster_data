#include<iostream>
using namespace std;


main()
{
	int a,dollar,pond,euro;
	cout<<"\n\t\t*******************************";
	cout<<"\n\t\tEnter in rupees : ";
	cin>>a;
	cout<<"\n\t\t*******************************";
	dollar=a/160;
	pond=a/210;
	euro=a/180;
	
	cout<<"\n\t\tyour rupees after convert in dollar :"<<dollar;
   cout<<"\n\t\t*************************************";
	cout<<"\n\t\tyour rupees after convert in  ponds :"<<pond;
   cout<<"\n\t\t*************************************";
	cout<<"\n\t\tyour rupees after convert in euro :"<<euro;
    cout<<"\n\t\t*************************************";
}

