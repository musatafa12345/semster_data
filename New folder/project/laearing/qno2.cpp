#include<iostream>
using namespace std;

class student {
	
	private : 
	int  rollno;
	string name;
	double present;
	float par;
	float highpar=0; 
	public:
		 
		 void input(){
		 	cout<<"\n\nenter rollno : ";
		 	cin>>rollno;
		 	cout<<"\nenter name : ";
		 	cin>>name;
		 	cout<<"\nenter no of presents : ";
		 	cin>>present;
		 	
		 }
		
		void display()
		{
			cout<<"\n\nenter rollno : "<<rollno;
		 	cout<<"\nenter name : "<<name;
			cout<<"\nenter no of presents : "<<present;
			cout<<"\nparcentage of presents : "<<par;
			cout<<"\n high parcentage  : "<<highpar;
			
			
		}
		
		void parcentage()
		{
			par=(present/30)*100;
			cout<<"parcentage :"<<par;
		}
		
		int highestpercentage ()
		{
			if(par>highpar){
				highpar=par;
				return highpar;
			}
			
			return highpar;
		 } 
		
};



main()
{
	
	student s1;
	int i=0;
	while(i<5){
	
	s1.input();
	s1.parcentage();
	s1.highestpercentage();
	s1.display();
	i++;
    }

}

