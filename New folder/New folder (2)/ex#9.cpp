#include<iostream>
#include <cmath>
using namespace std;

main()
{
	int a,b,c,d;
	char ch;
	cout<<"\n\n\n";
	cout<<"\t\tEnter frist farcation (a/b)"<<endl;
     cout<<"\t\t";cin>>a>>ch>>b;
  cout<<"\t\tEnter second farcation (c/d)"<<endl;
cout<<"\t\t";	cin>>c>>ch>>d;
	int x,y;
	x=a*d+b*c;
	y=c*d;
	cout<<endl;
	cout<<"\t\t"<<x<<"/"<<y;
	
	system("pause");
	
}
