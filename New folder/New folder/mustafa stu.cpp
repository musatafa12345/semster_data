#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
struct parson
{
	char name[10];
	int hours;
	double pay;
};

 int main()
{
	parson p1[10];
	for(int i=1;i<10;i++)
{
		
	cout<<"Enter the name : ";
	cin.getline(p1[i].name,10);
	cout<<"enter hours you work"<<endl
	;
	cin>>p1[i].hours;
	cout<<"enter the pay"<<endl;
	cin>>p1[i].pay;
	system("pause");
}
}
