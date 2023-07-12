#include<iostream>
using namespace std ;


class employ{
	
	
    private:
        int   total;
        float per;
        	char name[50];
        	int rollno;
        	int pf;
        	int ict;
        	int oop;
        	
		
    public:
        
        void input(void);
        void output(void);
	
	
	
};


void employ::input(void){
	
    cout << "Enter name: " ;
    cin.get(name[50]);
  
    cout << "Enter roll number: ";
    cin >>rollno;
    cout << "Enter marks of pf out of 100 : ";
    cin>>pf;
    cout << "Enter marks of ict out of 100 : ";
    cin>>ict;
    cout << "Enter marks of oop out of 100 : ";
     cin>>oop;
     total=pf+ict+oop;
    per=(float)total/300*100;
}
 

void employ::output(void){
	
    cout << "Student details:\n";
    
}

main(){
	
	
	
	
	
	
}
