#include<iostream>
using namespace std;
int main()
{
	 int price[5][5];
	///////////input section////////
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
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
		for(int i=0;i<5;i++)
		{
		for(int j=0;j<2;j++)
			if(j==0)
			{
				cout<<"the product number is = "<<price[i][j];
				
				cout<<"\t";
			}
			else
			{
				cout<<"the price of the product is = "<<price[i][j];
			}
			cout<<endl;
		}
	}
	
	return 0;
}
