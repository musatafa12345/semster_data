#include<iostream>
using namespace std ;

main()
{
	int j;
	for(int i=0;i<5;i++)
	{
		j=i;
		while(j<5)
		{
			if(j==1)
			{
				cout<<"ABCDE";
			}
			else if(j==2)
			{
				cout<<"FGHI";
			}
			else if(j==3)
			{
				cout<<"JKL";
			}
			else if(j==4)
			{
				cout<<"MN";
			}
			else
			{
				cout<<"O";
			}
		}
		cout<<"\n";
		j++;
	}
}
