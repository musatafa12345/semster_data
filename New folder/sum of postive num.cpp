#include<iostream>
using namespace std;


main()
{
	int sum,num;
	
	while(true){
		cout<<"\n\t\tEnter a postive number : ";
		cin>>num;
		if(num<0){
			break;
		}
		else{
			sum+=num;
		}
	}
	
	cout<<"\n\n\t\t****************************************";
	cout<<"\n\t\tsum of postive number :  "<<sum;
	cout<<"\n\n\t\t****************************************";
}

