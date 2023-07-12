#include<iostream>
using namespace std;


main()
{
	int i=1, num,odd=0,even=0;
	cout<<"enter where you whant to end : ";
	cin>>num;
	
	while(i<=num){
		if(i%2==0){
			even+=i;
		}
		else {
			odd+=i;
		}
		i++;
	}
	
	cout<<"\nsum of even number = "<<even;
	cout<<"\n\nsum of odd number  = "<<odd;
}

