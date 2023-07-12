#include<iostream>
using namespace std;

void getpolarity(int num){
	
	if(num<9){
		cout<<"\n\n-"<<num;
	}
	else{
		cout<<"\n\n"<<num;
	}
	
}


main()
{
	int n[10];
	
	for(int i=0;i<9;i++){
		
		cout<<"\n\n"<<i<<" "<<9<<"enter the value : ";
		cin>>n[i];
		getpolarity(n[i]);
	}
}

