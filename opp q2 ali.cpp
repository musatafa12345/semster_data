#include<iostream>
using namespace std;

class student{
	
	private:
	    struct data {
		
	    		int Empid;
       			int Empage;
     			double Empsalary;
     			char Empname[50];
        };
        
	    	public:
	    		data *ptr,s1;
	    		ptr=&s1;
	    		 void getinformation();
		          void display();
};

void student :: getinformation(){

        cout<<"\t\tEnter the name : ";
	cin.get((ptr).Empname,50);
	cout<<"\n\t\tEnter the id number : ";
	cin>>(ptr).Empid;
	cout<<"\n\t\t\Enter the age : ";
	cin>>(ptr).Empage;
	cout<<"\n\t\tEnter the sallary : ";
	cin>>(ptr).Empsalary;

}

void student :: display(){
	
	
	cout<<"\n\n\t\tName of employ : "<<(ptr).Empname;
	cout<<"\n\t\tAge of employ : "<<(ptr).Empage;
	cout<<"\n\t\tEmploy of id : "<<(ptr).Empid;
	cout<<"\n\t\tSallary of employ : "<<(ptr).Empsalary;
	cout<<"\n\n";
	
}





main(){
	
	
	
	
}
