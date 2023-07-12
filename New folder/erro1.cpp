#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int ar[20],size,i,j,temp,loc,min;
	cout<<"Enter Array Size : ";
	cin>>size;

	for(i=0;i<size;i++)
	{
		cout<<"\nEnter array elements : ";
		cin>>ar[i];	
	}
	for(i=0;i<(size-1);i++)
	{
		min=ar[i];
		loc=i;
		for(j=i+1;j<size;j++)
		{
			if(ar[j]<min)
			{
				min=ar[j];
				loc=j;
			}
	        
		}
	
	temp=ar[i];
	ar[i]=ar[loc];
	ar[loc]=temp;
    }
    cout<<"Array After Selection : ";
    for(i=0;i<size;i++)
	{
    	cout<<" "<<ar[i];
	}
	getch();
	return 0;	
}
