#include<iostream>
using namespace std;


void swap(int x,int y)
{
	cout<<"after swap : "<<x<<endl;
	cout<<"after swap : "<<y;
}

main()
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
			cout<<"the is number :"<<array[i][j]<<endl;
		}
	}
	  int a=0;
	  int b=0;
	  b=array[0][0];
	  a=array[0][1];
	swap(a,b);  
}
