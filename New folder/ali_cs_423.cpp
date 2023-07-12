#include<iostream>
using namespace std;

class arra{
	
	private : int array[1];
	
	public : arra(int a){
		array[0]=a;
	}
	
	public : void get_array(int b){
		
		array[0]=b;
	} 
	
	public : void dislpay(){
		cout<<"\nvalue of array : "<<array[0];
		
	} 
	
	public : int get_array(int a,int b){
		array[0]=a;
		array[0]=b;
		if(array[0]==array[0]){
			
			return 1;
		}
		else{
			 return 0;
		}
	}
	
	
};



main()
{
	
	int x=-20; int y=30;
	arra a1=arra(x);
	a1.dislpay();
	arra a2;
	a2.get_array(y);
	a2.dislpay();
	a2.get_array(x,y);
	
}

