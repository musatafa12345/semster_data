#include<iostream>
using namespace std;


class counter{
		private:
			int x;
			double y;
		public:
		 	counter ( )   //Constructor 1
			 {
			 	x=0;
			 	y=0;
			 	
			 }    
			counter (int a ) //Constructor 2
			{
				x=a;
			 	y=0;
		
	     	}
			counter (int b , int c)	//Constructor 3
			{
				x=b;
			 	y=c;
			 	
			}
			counter (int d, double e) //Constructor 4
			{
				x=d;
			 	y=e;
			}
			
			public:
				void output(int a,int b)
				{
					cout<<"**********************";
					cout<<"\nConstructor"<<a<<" : "<<x;
			 	    cout<<"\nConstructor"<<b<<" : "<<y;
					cout<<"\n**********************";
				}
		};



main()
{
	
	 counter c1=counter();
	 
	 c1.output(1,1);
	 c1=counter(2);
	 c1.output(2,2);
	 c1=counter(4,5);
	 c1.output(3,3);
	 c1=counter(5,6);
	 c1.output(4,4);

}

