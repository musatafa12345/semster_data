#include<iostream>
#include<cmath>
using namespace std ;


int question1()
{
  	int a,b,x,y,z,ans;
  	b=13;a=6;
  	x=a+b;
  	cout<<"a"<<'+'<<"b = "<<x<<endl;
  	y=a+b+x;
  	cout<<"a"<<'+'<<"b"<<'+'<<"x = "<<y<<endl;
  	z=a+b+x+y;
  	cout<<"a"<<'+'<<"b"<<'+'<<"x"<<'+'<<"y = "<<z<<endl;
  	
  	cout<<"a"<<'+'<<"b"<<'+'<<"x"<<'+'<<"y"<<'+'<<"z = ";
	cin>>ans;
}




int main()
{
	question1();
	
	return 0;
}
