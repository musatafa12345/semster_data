#include <iostream>
#include<iomanip>
#define SizeRow 3
#define SizeColumn 4
using namespace std;
int main()
{
	int table [SizeRow][SizeColumn];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>table[i][j];
		}
	}
	cout<<"Array Elements : "<<endl ;
	int i = 0;
	for( i = 0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<setw(8)<<table[i][j];
		}
	cout<<""<<endl;	
	}
	
}
