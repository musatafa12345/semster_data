#include<iostream>
using namespace std;

/*  
C program to find sum of following series
 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
*/

    
int main()
{
	int i,N;
	float sum;
	
	//read value of N
	cout<<"Enter the value of N: ";
	cin>>N;
	
	//set sum by 0
	sum=0.0f;
	
	//calculate sum of the series
	for(i=1;i<=N;i++)
		sum = sum + ((float)1/(float)i);
	
	//print the sum
	
	cout<<"Sum of the series is: %f\n"<<sum;
	
	return 0;
}
