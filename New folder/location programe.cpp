#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	char dir='a';
	int x=10,y=10;
	cout<<"Enter the quit\n";
	while(dir!='\r')
	{
	  cout<<"Your location is"<<x<<","<<y<<endl;
	  cout<<"Press the direction key(n,s,w,e): "<<endl;
	  dir=getche();
	  if(dir='n')
	  y++;
	  else if(dir='s')
	  y++;
	  else if(dir='e')
	  x++;
	  else if(dir='w')
	  x--;
    }
}
