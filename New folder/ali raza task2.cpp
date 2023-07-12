#include<iostream>
using namespace std;


main()
{
	
	int product=1;
	
	for(int i=1;i<=15;i++){
		
		if(i%2!=0){
			product=product*i;
		
		}
		
	}
	
	cout<<"\nresult : "<<product;
	
}

