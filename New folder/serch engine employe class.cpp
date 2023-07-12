#include<iostream>
using namespace std;

class employe{
	private : int work_hour,parson_sallary,final_sallary;
	
	public : employe(){
		work_hour=0;
		parson_sallary=0;
	}
	
	public : void get_info(int sallary,int hour){
		work_hour=hour;
		parson_sallary=sallary;
		final_sallary=parson_sallary;
	}
	public : void addsal(){
		if(parson_sallary<500){
			final_sallary+=10;
		}
	}
	public : void addwork(){
		if(work_hour>6){
			final_sallary+=5;
		}
	}
	
	public : void dispaly_sallary(){
		cout<<"\n\n\t\tyour work hour : "<<work_hour;
		cout<<"\n\n\t\tyour basic sallary : "<<parson_sallary<<" $";
		cout<<"\n\n\t\tyour final sallary : "<<final_sallary<<" $";
	}
	
};

main()
{
	employe emp1=employe();
	int hour,sallary;
	cout<<"\n\t\tEnter your sallary : ";
	cin>>sallary;
	cout<<"\n\t\tEnter you work hour par day : ";
	cin>>hour;
	emp1.get_info(sallary,hour);
	emp1.addsal();
	emp1.addwork();
	emp1.dispaly_sallary();
}

