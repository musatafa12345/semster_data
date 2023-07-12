#include<iostream>
using namespace std;

class tolboth{
	private: unsigned int total_cars;
	private: double total_money ;
	
public:	tolboth(){
		total_cars=0;
		total_money=0;
	}
	
public: void pay_cars(){
	
	total_money+=0.50;
	total_cars++;
}	

public: void no_pay_cars(){
	
	total_cars++;
}

public: void display(){
	cout<<"\n\n******************************************\n\n";
	cout<<"\n\nTotal amount of that day eran : "<<total_money;
	cout<<"\n\nTotal number of cars pass through :  "<<total_cars;
	cout<<"\n\n******************************************\n\n";
}	

	
	
	
	
};


main()

{
	
	tolboth b1;
	bool b; 
	while(b!=true){
		
		cout<<"\n1:for pay car :"<<endl;
		cout<<"\n2:for none pay car :"<<endl;
		cout<<"\n3:for diplay total amount or cars :"<<endl;
		cout<<"\n4:for exist : "<<endl;
		int x;
		cin>>x;
		switch(x){
			case 1:{
				b1.pay_cars();
				break;
			}
			case 2:{
				b1.no_pay_cars();
				break;
			}
			case 3:{
				b1.display();
				break;
			}
			case 4:{
				
				b=true;
				break;
			}
			default:{
				cout<<"\nyou Enter worng number "<<endl;
				break;
			}
				
				
				
			
		}
		
	}
	

}

