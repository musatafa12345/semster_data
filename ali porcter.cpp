#include<iostream>
using namespace std;

struct information {
	
	int Empid;
	int Empage;
	double Empsalary;
	char Empname[50];
	
	
	
};

void line (){
	for(int i=0;i<10;i++)
	{
		cout<<"_____";
	}
} 

main()
{
    information p1;
    cout<<"\n\n";
	cout<<"\t\tEnter the name : ";
	cin.get(p1.Empname,50);
	cout<<"\n\t\tEnter the id number : ";
	cin>>p1.Empid;
	cout<<"\n\t\t\Enter the age : ";
	cin>>p1.Empage;
	cout<<"\n\t\tEnter the sallary : ";
	cin>>p1.Empsalary;
	
	cout<<"\n\n";
	line();
	
	cout<<"\n\n\t\tName of employ : "<<p1.Empname;
	cout<<"\n\t\tAge of employ : "<<p1.Empage;
	cout<<"\n\t\tEmploy of id : "<<p1.Empid;
	cout<<"\n\t\tSallary of employ : "<<p1.Empsalary;
	cout<<"\n\n";
	line();
}
