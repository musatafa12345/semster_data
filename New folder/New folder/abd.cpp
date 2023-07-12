#include<iostream>
using namespace std;
int add(int x,int y)
{
	return (x+y);
}
int main()
{
	int a, b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	add(a,b);
	cout<<add(a,b);
	return 0;
		
}

