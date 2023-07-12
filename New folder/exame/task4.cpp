#include<iostream>
using namespace std;

void factorial(int n){
	double fact=1.0;
	
		
		for(int i=1;i<=n;++i){
		fact*=i;
		
	}
	cout<<"\nfactorial of number : "<<fact;
}



main()
{
	int n;
	cout<<"\nEnter the size of array : ";
	cin>>n;
	int array[n];
	int sum=0,avg;
	double fac_array[n];
	cout<<"\nEnter the value of an array elements : ";
	for(int i=0;i<n;i++){
		cin>>array[i];
		sum=sum+array[i];
	}
	avg=sum/n;
	cout<<"\nAvger of elements"<<avg;
		
	for(int i=0;i<n;i++){
		factorial(array[i]);
	}

}
