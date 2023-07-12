#include<iostream>
using namespace std;

class converter{
	
	double fahrenheit=0 , celsius=0;
	public:
	void formula(double fahrenheit ){
		fahrenheit=( fahrenheit* 9/5) + 32; 
		cout<<"temparture in fahrengeit : "<<fahrenheit ;
		
	}
	
		void formula1(double celsius ){
		
		celsius=(fahrenheit-32)*5/9;
		cout<<"temparture in celsius : "<<celsius;	
	}
	
	
	
		
};


main()
{
	converter b1;
	double x=0;
	char y;
	cout<<"enter f for farheight or c celcius ";
	cin>>y;
	switch(y){
	case 'c':
		{
		
		cout<<"enter temp in farheight ";
		cin>>x;
    	b1.formula1(x);
   }break;
   
   case 'f':
		{
		
		cout<<"enter temp in celcius ";
		cin>>x;
    	b1.formula(x);
   }break;
}

}

