#include<iostream>
using namespace std;


main()
{
	int x,num_1=0,num_2=0,total=0;
	cout<<"\n1: for addtation : ";
	cout<<"\n2: for subtaration : ";
	cout<<"\n3: for division : ";
	cout<<"\n4: for reaminder : ";
	cin>>x;
	
	while(x==1){
		
		cout<<"\nEnter the number : ";
		cin>>num_1;
		cout<<"\nEnter the number : ";
		cin>>num_2;
		
		total=num_1+num_2;
		cout<<"\ntotal sum are : "<<total;
		break;
	}
	
	while(x==2){
		
		cout<<"\nEnter the number : ";
		cin>>num_1;
		cout<<"\nEnter the number : ";
		cin>>num_2;
		
		total=num_1-num_2;
		cout<<"\ntotal subtration are : "<<total;
		break;
	}
	while(x==3){
		
		cout<<"\nEnter the number : ";
		cin>>num_1;
		cout<<"\nEnter the number : ";
		cin>>num_2;
		
		total=num_1*num_2;
		cout<<"\ntotal multiply are : "<<total;
		break;
	}
	while(x==4){
		
		cout<<"\nEnter the number : ";
		cin>>num_1;
		cout<<"\nEnter the number : ";
		cin>>num_2;
		
		total=num_1%num_2;
		cout<<"\ntotal reaminder are : "<<total;
		break;
	}
	
}

