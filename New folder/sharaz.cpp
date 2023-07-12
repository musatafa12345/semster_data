#include<iostream>
using namespace std; 

class mu{
	private:
	 int car=0;  
	double money=0; 
	public: 
	mu(){
		car=0; 
		money=0 ;
	}; 
	public:
	void payingCar() 
	{  
	car=car++;   
	money=money++; 
	} 
	void nopayCar() 
	{ 
	car=car++;  
	money=money++;  
	}  
	void display()  
	{   
	cout<<"\n Total Money Collected On tooBooth = "<<money<<endl; 
	} 
	void get() 
	{  
	cout<<" Total cars On tooBooth = "<<endl;  
	}
};
	 
int main() 
{ 
	int x;  
	mu c ;
	cout<<"Enter 1 For Toll Paying Cars and 2 For Non-Toll Paying Cars = ";  
	cout<<"";
	cin>>x; 
	switch (x)
	{ 
	case 1:  {
		
		c.payingCar();  
		c.display(); 
		c.get();
		
		break;
	}
 

	case 2: {
		c.nopayCar();
		c.display(); 
		c.get(); 
		break;
	}
	
	}
	return 0;
 }
