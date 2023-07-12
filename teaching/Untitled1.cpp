#include<iostream>
using namespace std;

class complex{
	
	int a,b;
	int sum1,sum2;
	public:
	complex(){
		a=0;
		b=0;
	}
		
	public:
		void setdata1(int v1,int v2){
			a=v1;
			b=v2;
			
		}
		void setdata2(int c1,int c2){
			a=c1;
			b=c2;
			
		}
		void setdatabysum(){
			
			sum1= a+a;
		    sum2= b+b;	
		    
		}
		void printnumber(){
			cout<<"Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
		void output(){
			cout<<"Your Complex number is "<<sum1<<" + "<<sum2<<"i"<<endl;
		}
	};
		int main(){
			complex c1;
		
			c1.setdata1(1,2);
			c1.printnumber();
			complex();
	        c1.setdata2(3,4);
	        c1.printnumber();
	        complex();
			c1.setdatabysum();
			c1.output();			
			return 0;
		}
