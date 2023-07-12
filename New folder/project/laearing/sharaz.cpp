#include<iostream>
using namespace std;
#include <cmath>

double factorial(int x){
	
int	factorial=1;
	for(int a=1;a<=x;a++) {
		factorial+=factorial*a;
	}
	return factorial;
}

double power(int b,int ex){
	
	double r=0;
	r=pow(b,ex);
	return r;
}
main()
{
	
	double sum=0;
	for(int x=1;x<=5;x++){
	int n=1;
	sum=power(3,x)/factorial(x);
	sum+=n;
    }
	cout<<sum;

}

