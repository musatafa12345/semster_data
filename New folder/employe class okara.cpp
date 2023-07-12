#include<iostream>
#include<cstring>
using namespace std;

class employee{
	#define n_size 50
	#define ad_size 120
	private : char name[60],adress[120];
	private : int year;
	
	
	public : void set_name(){
		cout<<"\nEnter the name : ";
		cin.getline(name,60);
	}
	public : void set_adress(){
		cout<<"\nEnter the adress : ";
		cin.getline(adress,120);
	}
	public : void set_year_of_joining(){
		cout<<"\nEnter the year of joining : ";
		cin>>year;
	}
	public : void display(){
		cout<<"\n\n\tname : "<<"\t\tyear of joining  : "<<"\tadress : \n";
		cout<<"\n\t"<<name<<"\t\t"<<year<<"\t\t\t"<<adress;
	}
	
};



main()
{
	employee emp[3];
	
	for(int i=0;i<3;i++){
		
		cin.ignore();
		emp[i].set_name();
		emp[i].set_adress();
		emp[i].set_year_of_joining();
	}
	
	for(int i=0;i<3;i++){
		emp[i].display();
	}
}

