#include<iostream>
using namespace std ;
int main()
{
    double y;
	y= 2500;
	char a;
	a='$';
    cout<<" \n for 1 year mamber ship :"<< y<< a<<"\n";
	cout<<"\nAfter one year 4 paecent add in member ship price"<<"\n"<<endl;
	for(int i=1; i<6;i++)
	{
	int x;
	x=4;
	double total;
	total=((y*x)/100);
	y+=total;
	cout<<i<<"year after price is:\t"<<y<<" $"<<"\n";
	
	}
	
}
