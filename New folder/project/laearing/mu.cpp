#include<iostream>
using namespace std;

class vehicel {

public:
	int no_of_seat;
	double model_no;
	
	
	public:
		void detais(int n,double m){
			
			no_of_seat=n;
			model_no=m;
			cout<<"\nno of seats :"<<no_of_seat;
			cout<<"\nmodel no :n " <<model_no;
		}
		public :
		void apply_break(){
			cout<<"\nbreak are apply speed gose down : ";
		} 
	public :
	void accelarte(){
		
		cout<<"\naccelarte apply speed gose up :";
	}
};

class bus : vehicel{
	
   string color;
	int speed;
	
	
	public:
		void color_of_bus(string c){
			color=c;
			cout<<"\ncolor of bus : "<<color;
		}
		
		void speed_bus(int s){
			speed=s;
			cout<<"\nspeed of bus is : "<<speed;
			
		}
};


main()
{
	bus b1=bus();
	vehicel v1;
	v1.detais(75,2020);
	b1.color_of_bus("blue");
	v1.accelarte();
	b1.speed_bus(100);
	v1.apply_break();

}


