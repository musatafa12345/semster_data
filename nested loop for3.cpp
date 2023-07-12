#include<iostream>
using namespace std;
int main()
{
	for(int x=1;x<6;x++)
	{
		for(int z=x-1;z>0;z--)
		{
			cout<"  ";
		}
		for(int y=x;y<6;y++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
