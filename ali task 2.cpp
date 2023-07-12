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
		cout<<"___";
	}
} 

 main()
{
    information *ptr, p1;
    ptr= &p1;
    cout<<"\n\n";
	cout<<"\t\tEnter the name : ";
	cin.get((*ptr).Empname,50);
	cout<<"\n\t\tEnter the id number : ";
	cin>>(*ptr).Empid;
	cout<<"\n\t\t\Enter the age : ";
	cin>>(*ptr).Empage;
	cout<<"\n\t\tEnter the sallary : ";
	cin>>(*ptr).Empsalary;
	
	cout<<"\n\n";
cout<<"\t\t";	line();
	
	cout<<"\n\n\t\tName of employ : "<<(*ptr).Empname;
	cout<<"\n\t\tAge of employ : "<<(*ptr).Empage;
	cout<<"\n\t\tEmploy of id : "<<(*ptr).Empid;
	cout<<"\n\t\tSallary of employ : "<<(*ptr).Empsalary;
	cout<<"\n\n";
cout<<"\t\t";	line();
}
