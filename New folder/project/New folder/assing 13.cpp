#include<iostream>
using namespace std ;


main()
{
	int st,end,sum,n;
	cout<<"Enter the number where strat = ";
	cin>>st;
	cout<<"Enter the number where end = ";
	cin>>end;
	for(int i=st;i<end;i++)
	{
		if(i%2!=0)
		{
			cout<<"\n\nprime number is = "<<i;
			sum+=i;
		}
	}
	cout<<"\n\ntotal of parime number = "<<sum;
}

