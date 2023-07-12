#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int chcount=0;
	int wdcount=1;
	char ch='a';
	cout<<"Enter the phrase :";
	while(ch!='\r')
	{
		ch=getche();
		if(ch==' ')
		wdcount++;
		else
		chcount++;
	}
	cout<<"\n words"<<wdcount<<endl;
	cout<<"\n Latter"<<chcount<<endl;
	return 0;
	
	
}
