#include <iostream>
using namespace std;
circle()
{
int a;
cout<<"enter the radius for thr area of circle"<<endl;
cin>>a;
cout<<"the area of circle is = "<<a*3.14<<endl;
}
circumference()
{
	int b;
	cout<<"enter the value of radius for the area of circumference"<<endl;
	cin>>b;
	cout<<"you area of circumference is ="<<2*3.14*b<<endl;
}
int main()
{
	int c;
	cout<<"enter 1 for circle of area and enter 2 for circumference of area"<<endl;
	cin>>c;
	if(c==1){
	circle();
}if(c==2){
	circumference();
	
}else
cout<<"the number is defualt"<<endl;
	
}
