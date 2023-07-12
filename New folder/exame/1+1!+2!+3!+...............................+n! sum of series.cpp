#include<iostream>
using namespace std;


void sum_of_seris(int number){
	
	double fact=1,sum=1;	
	for(int i=1;i<=number;i++){
		fact*=i;
		sum+=fact;
	}

	cout<<"\n\t\tfactorial     :   "<<fact;
	cout<<"\n\t\tsum of series is : "<<sum;
	
	
}

main()
{
	int num;
	cout<<"\n\t\tEnter the number : ";
	cin>>num;
	sum_of_seris(num);
}

