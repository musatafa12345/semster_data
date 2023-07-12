#include<iostream>
using namespace std;


main()
{
	/*
	int age=19;
	int exp=7;
	if(age>=20&&exp>=5){
		cout<<"your are able to apply "<<endl;
    }
    else{
    	cout<<"your not able  "<<endl;
	}
	
	*/
	
	
	//nasted if 
	
	//if statement within if statement is called nested if 
	
	/*
	Syntax 
	if(condition){
	
	if(condition){
	
	}

}
	*/
	
	int age1=18;
	int exp1=6;
	//outer if
	if(age1>=20){
		//iner iff
		if(exp1>=5){
			cout<<"you are able : ";
		}else{
			cout<<"your exp is low : ";
		}
		//iner if end
		
	}else{ //outer if end
		cout<<"your age is low :";
	}
	
}

