#include<iostream>
using namespace std;


int main()
{
	int n,sum;
	sum=0;
	cout<<"Enter the number term = ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		n=n++;
		sum=+n;
	}
	cout<<"total sum of number = "<<sum;
}
