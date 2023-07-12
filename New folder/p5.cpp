#include<iostream>
using namespace std;


main()
{
	int x;
	double factorial=1;
	cout<<"enter the postive  num  : ";
	cin>>x;
	int i =1;
	while(i<=x){
			factorial*=i;
		    i++;
	}
	cout<<"factorial of num is "<<x<<"="<<factorial;
	
}

