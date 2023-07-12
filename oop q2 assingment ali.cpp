#include<iostream>
using namespace std;

class student{
	
	private:
	   struct data{
	   
	  	    	int Empid;
       			int Empage;
     			double Empsalary;
     			char Empname[50];
            };
	
	public:
	       	
           data s1;
		   		
	       void getinformation();
		   void display();
		   	
};

void student :: getinformation(){
	
        cout<<"\t\tEnter the name : ";
	cin.get(s1.Empname,50);
	cout<<"\n\t\tEnter the id number : ";
	cin>>s1.Empid;
	cout<<"\n\t\t\Enter the age : ";
	cin>>s1.Empage;
	cout<<"\n\t\tEnter the sallary : ";
	cin>>s1.Empsalary;

}

void student :: display(){
	
	
	cout<<"\n\n\t\tName of employ : "<<s1.Empname;
	cout<<"\n\t\tAge of employ : "<<s1.Empage;
	cout<<"\n\t\tEmploy of id : "<<s1.Empid;
	cout<<"\n\t\tSallary of employ : "<<s1.Empsalary;
	cout<<"\n\n";
	
}


main(){
	
	student s1;
	s1.getinformation();
	s1.display();
	
}
