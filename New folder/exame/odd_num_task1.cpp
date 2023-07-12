#include<iostream>
using namespace std;


main()
{
	int size;
	int *num;
	cout<<"Enter the size : ";
	cin>>size;
	num=new int[size];
	for(int i=0,j=3;i<size;i++){
		num[i]=j;
		j+=2;
	}
	for(int i=0;i<size;i++){
		cout<<num[i]<<", ";
	}
	
	delete []num;
	
}

