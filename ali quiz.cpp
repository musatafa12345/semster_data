#include<iostream>
using namespace std;


main(){
	
	int a,b,sum1;
	
	
	cout<<"Enter the value 1:"<<endl;
	cin>>a;
	cout<<"Enter the value 2:"<<endl;
	cin>>b;
	int * ptr1=&a;
	int *ptr2=&b;
	sum1=*ptr1-*ptr2;
	int *ptr3=&*ptr1;
	 ptr2=&*ptr1;
	
	cout<<"the value of sum1 is :"<<sum1;
	
}
