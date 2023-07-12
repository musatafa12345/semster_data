#include<iostream>
using namespace std;


main()
{
	int num;
	cout<<"\n\n";
	cout<<"\t\thow many tickets of seminar you whant = ";
	cin>>num;
	if(num<=7)
	{
		int x=100;
		cout<<"\n\n";
		cout<<"\t\tyou'r price is par tickets is  = "<<x<<endl;
		cout<<"\t\tYou'r total price is = "<<x*num;
	}
	else if(num>7&&num<=14)
	{
			int x=70;
			cout<<"\n\n";
		cout<<"\t\tyou'r price is par tickets is  = "<<x<<endl;
		cout<<"\t\tYou'r total price is = "<<x*num;
	}
	else if(num>=15)
	{
			int x=50;
			cout<<"\n\n";
		cout<<"\t\tyou'r price is par tickets is  = "<<x<<endl;
		cout<<"\t\tYou'r total price is = "<<x*num;
	}
	else 
	{
		cout<<"\t\terror";
	}
	cout<<"\n\n\n";
	
	system("pause");
}
