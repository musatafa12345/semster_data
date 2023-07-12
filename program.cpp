#include<iostream>
using namespace std;
int main()
{
	float a,b,c,fine1, fine2 ,fine3,total_fine;
	cout<<"Enter the day student are late"<<endl;
	cin>>a;
	fine3=a*100;
	cout<<"Enter the day student break the rule"<<endl;
	cin>>b;
	fine1=b*200;
	cout<<"Enter the day student not in uniforam"<<endl;
	cin>>c;
	fine2=c*500;
	total_fine=fine1+fine2+fine3;
	cout<<"total fine = "<<total_fine<<"\n""\n";
	system ("pause");
	return 0;
}

