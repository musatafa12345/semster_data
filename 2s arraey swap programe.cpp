#include<iostream>
using namespace std;

main ()
{
	int array[1][2];
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter the number: ";
			cin>>array[i][j];
		}
	}
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"the number"<<array[i][j]<<endl;
		}
	}
	
	for(int i=1;i>0;i--)
	{
		for(int j=2;j>0;j--)
		{
			cout<<" the number after swap : "<<array[i][j]<<endl;
		}
	}
	
	
}
