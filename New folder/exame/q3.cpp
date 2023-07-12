#include<iostream>
#include<math.h>
using namespace std;


main()
{
	double sum=1;
	char x;
	int i=0;

	//sum of series 1+1/4....1/8 c++ code
	for(int j=0;j<100;j++){
		i+=4;
		sum+=1/i;
	}
	cout<<"sum of series is  : "<<sum;
		
}
