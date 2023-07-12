#include<iostream>
using namespace std;

class complex{
	int a;
	int b;
	public:
		void setdata(int v1,int v2){
			a=v1;
			b=v2;
			
		}
		void setdatabysum(complex 01,complex 02){
			
			a = 01.a+02.a;
		    b = 01.b+02.b;	
		    
		}
		void printnumber(){
			cout<<"Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
	};
		int main(){
			complex c1,c2,c3;
		
			c1.setdata(1,2);
			c1.printnumber();
			
	        c2.setdata(3,4);
	        c2.printnumber();
	        
			c3.setdatabysum(c1,c2);
			c3.printnumber();			
			return 0;
		}
