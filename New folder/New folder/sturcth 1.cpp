#include<iostream>
#include<conio.h>
using namespace std;
struct emp
{
	char name[10];
	int hours;
	double pay;
};

 int main()
{
  struct emp e[10]; 
	for(int i=1;i<10;i++)
{
		
	cout<<"Enter the name : ";
	cin.getline(e[i].name,10);
	cout<<"enter hours you work"<<endl;
	cin>>e[i].hours;
	cout<<"enter the pay"<<endl;
	cin>>e[i].pay;

}
	system("pause");
}
