#include<iostream>
using namespace std;


main(){
    int	x=10;//gobal
	int a;
	int b;
	cout<<"Enter  value a : ";
	cin>>a;
	
	cout<<"Enter  value b : ";
	cin>>b;
	
	if(a<b) // if statement 
	{ //body of if
		  int x=11;//local 
		cout<<" a is lesthen b:";
		
	}
	else    //else statement 
	{
	// body of else
	cout<<" b is lesthen a "<<endl;
    cout<<"\n"<<x;
   }
	cout<<"\n"<<x;
}
