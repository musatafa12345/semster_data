#include<iostream>
 using namespace std;
 int main()
 {
 	cout<<"Enter your password"<<"\n";
 	double id;
 	cin>>id;
 	while(id!=5619)
 	{
 		cout<<"invalid password"<<"\n";
 		cin>>id;
	 }
	 cout<<"password is valid";
 }
