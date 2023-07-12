#include<iostream>
using namespace std;
int main()
{
	long int price[5][2];
	///////////input section////////
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(j==0)
			{
				cout<<"Enter the product number = ";
				cin>>price[i][j];
			}
			else
			{
				cout<<"Enter the price of the product = ";
				cin>>price[i][j];
			}
		}
		///////////out put//////////
		for(int j=0;j<2;j++)
		{
			if(j==0)
			{
				cout<<" product number = "<<price[i][j];
				
				cout<<"\t";
			}
			else
			{
				cout<<"price of the product = "<<price[i][j];
			}
			cout<<endl;
		}
	}
	
	return 0;
}
