#include<iostream>
#include<math.h>
using namespace std;


main()
{
	double sum=0.0;
	char x;
	int i=0;
	do{
	
	for(int j=2;i<100;j*=2){
		++i;
		sum+=1/j;
	}
	cout<<"sum of series is  : "<<sum;
	
	cout<<"you whant to repeat : "<<endl;
	cin>>x;
	}while(x=='y');	
	
	
	
	
}

