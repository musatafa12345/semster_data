#include<iostream>
using namespace std;

class even{
	
	private : int eve,num;
	
	public : even(){
	    eve=0;
		num=0;
	
	}
	
	public : void data(){
		cout<<"\nEnter the number : ";
		cin>>num;
	}
	
	public : void calculate(){
		
		
		if(num%2==0){
			cout<<"\n\nyour number is  even : "<<num;
		}
		else{
			cout<<"\n\nyour number is not even : "<<num;
		}
	}
	
	public : void display(){
		cout<<"\n\nyour number : "<<num;
	}
};



main()
{
	even e1=even();
	e1.data();
	e1.display();
	e1.calculate();
}

