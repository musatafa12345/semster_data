#include<iostream>
using namespace std;

void factorial(double n){
	double factorial=1;
		if(n<0){
            
        cout<<"factorial of zero not exist : ";    
			
		}
		else
	for(int i=1;i<=n;++i){
		factorial=factorial*i;
	}
	cout<<"factotial : "<<factorial;
}



main()
{
	
	x:
	int n;
	cout<<"Enter the length of array : ";
	cin>>n;
	if(n>20){
		goto x;
	}
	int array[n];
	int sum=0,avg;
	double fac_array[n];
	
	for(int i=0;i<n;i++){
		y:
		cout<<"Enter the value of array(in the range of 0 t0 12) ";
		cin>>array[i];
		if(array[i]>12){
			goto y;
		}
		sum=sum+array[i];
		
	}
	for(int i=0;i<n;i++){
	    int f=array[i];
		factorial(f);
		cout<<endl;
    }
	avg=sum/n;
	cout<<"avg"<<avg<<endl;
	
		
	

}
