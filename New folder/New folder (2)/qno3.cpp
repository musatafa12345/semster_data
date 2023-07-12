#include<iostream>
using namespace std ;

void half()
{
	int x,y,a[2] ;
	cout<<"Enter the number = ";
	cin>>a[2];
	int *p;
    *p=a[2];
	x=(*p)/2;
	y=(*p)*2;
	cout<<"half value = "<<x<<endl;
  cout<<"double value = "<<y;
}

main()
{
	half();
	
}
