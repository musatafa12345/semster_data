#include<iostream>
#include<cstring>
using namespace std;


main()
{
	char pas[22]="KhAn9012";
	char pas1[22];
	cout<<"Enter your  password = ";
	cin>>pas1;
	if(strcmp(pas,pas1)==0)
	{
		cout<<"Your Password is correct"<<endl;
	}
	else
	{
		cout<<"Your password  incorrect "<<endl;
	}
	
	system("pause");
}
