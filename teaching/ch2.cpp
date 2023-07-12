#include<iostream>
using namespace std;


main()
{
	
	/*
	question
	Take input of age of 3 people by user and 
	determine oldest and youngest among them
	*/
	int age1,age2,age3;
	
	cout<<"Enter age of 1st parson : ";
	cin>>age1;
	cout<<"\nEnter age of 2nd parson : ";
	cin>>age2;
	cout<<"\nEnter age of 3rd parson : ";
	cin>>age3;
	if(age1>age2&&age1>age3){
		cout<<"1st parson is oldest : "<<age1;
		if(age2>age3){
			
			cout<<"\n3rd parson is youngest : "<<age3;
		}
		else{
			cout<<"\n2nd parson is youngest : "<<age2;
		}
		
	
	}
	else if(age1<age2&&age2>age3){
			cout<<"2nd parson is oldest : "<<age2;
				if(age1>age3){
			
			cout<<"\n3rd parson is youngest : "<<age3;
		}
		else{
			cout<<"\n1st parson is youngest : "<<age1;
		}
		
	}
	else{
		cout<<"\n3rd parson is oldest : "<<age3;
					if(age1>age2){
			
			cout<<"\n2nd parson is youngest : "<<age2;
		}
		else{
			cout<<"\n1st parson is youngest : "<<age1;
		}
	}
	
	
	
	

}

