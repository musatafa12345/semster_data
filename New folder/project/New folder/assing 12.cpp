#include<iostream>
using namespace std ;


main()
{
	cout<<"programe number 12";
	int st,end,sum=0;
	cout<<"\n\n\t\tEnter the number where you start = ";
	cin>>st;
	cout<<"\n\n\t\tEnter the number where you end = ";
	cin>>end;
	for(int i=st;i<=end;i++)
	{
		int n;
		n=i*i;
	      cout<<"\n\n\t\tsequare of intger : "<<n<<endl;
		  sum+=n;
	}
	cout<<"\n\n\t\ttotal sum of = "<<sum;
	
}
