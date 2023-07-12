#include<iostream>
using namespace std;

main()
{
	int g=0;// g variable is declear and give the value zero 
	int a[4];// int type array
	for(int i=0;i<4;i++) /// cin the value of array
	{
		cout<<"enter the number ";
		cin>>a[i];
	}
	g=a[0]; //first element store in g
	for(int i=1;i>4;i++)
	{
		if(g<a[i]) /// gater number cheaker 
		{
		g=a[i];    ///if g is less then second  element of array 
		           //// second element store in g 
	     
		 }
	}
	cout<<"grter number is = "<<g;
}
