#include<iostream>
using namespace std ;


main()
{
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<7;j++)
		{
			if((i==0&&j%3==0)||(i==1&&j%3==0)||(i-j==2)||(i+j==8))
			{
				cout<<"*""\n";
			}
			else
			{
				cout<<"\n""";
			}
		}
	}
}
