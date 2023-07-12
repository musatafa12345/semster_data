#include<iostream>
using namespace std;

class distanc{
	private:
	int feet;
	int inches;
	int a,b;
	public:
		distanc(int x,int y){
		feet=x;
		inches=y;
		a=x;
		b=y;
	}
	distanc(){
		feet=a;
		inches=b;
	}
	
	
	
	public:
	void display()
	{
		inches=feet*12;
		cout<<"\nfeet in inches : "<<inches;
		feet=inches/12;
		cout<<"\nfeet in feet : "<<feet;
	}
};
    
    	
	


int main(){
	
	distanc c1;
	distanc c2=distanc(40,30);
	
	c2.display();
	
	c1.display();
	
	
}
