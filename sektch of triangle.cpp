#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<6;i++)
	{
		for(int j=i;j<6;j++)
		{
		
            if (j == i || j == i-1)cout<<"*";
		else cout<<" ";
	}
		cout<<endl;
	}
}
