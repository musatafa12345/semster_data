#include<iostream>
using namespace std ;

main()
{
	int j;
	for(int i=0;i<1;i++)
	{
		j=i;
		while(j<4)
		{
			if(j==0)
			{
				cout<<"ABCDE";
			}
			else if(j==1)
			{
				cout<<"FGHI";
			}
			else if(j==2)
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
		   cout<<"\n";
	    	j++;
	   }
	}
}
