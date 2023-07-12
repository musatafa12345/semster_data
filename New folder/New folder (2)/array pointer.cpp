#include<iostream>
using namespace std;

void fun(int arr[])
{
	int* p;
	p= arr;
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<endl;
		cout<<p<<endl;
	}
}


main()
{
	int array[5]={1,2,3,4,5};
	fun(array);
	
}
