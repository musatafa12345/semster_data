#include<iostream>
using namespace std;
int main()
{
	int fee[3];
	for(int x=0;x<3;x++)
	{
		cout<<"Enter fee of "<<x+1<<" student =";
		cin>>fee[x];
	}cout<<endl;
		for(int x=0;x<3;x++)
	{
		cout<<" fee of student is "<<fee[x]<<endl;
	}
	return 0;
	system("pause");
}
