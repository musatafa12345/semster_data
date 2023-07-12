#include<iostream>
using namespace std;
bool isprime(int  number){
 	
 	bool result;
 	result=true;
 	for(int divisor=2;divisor<number/2;divisor++)
 	
	 if(number/divisor*divisor!=number)
 	{
    	result=false;
		 }
		 
 	
	 return result;
 	
 } 

main()
{
 cout<<isprime(3);
}

