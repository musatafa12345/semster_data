#include<iostream>
using namespace std;

void factorial(int num){
	double factorial=1.0;
	if(num<0){
	    cout<<"\nfactorial is not exist : ";
	}
	else{
		for(int i=1;i<num;++i){
			factorial=factorial*i;
	}
    
	}cout<<"\nfactorial : "<<factorial;
	
	
}



main()
{
	
	
}

