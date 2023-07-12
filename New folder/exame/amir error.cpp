#include <iostream>
using namespace std;

int main()
{
	string name,father_name,cnic,department,adress;
	double matric_marks,inter_marks, aggregate,inter_percentage,matric_percentage;
	cout<<"\n\t\t##############################";
	cout<<"\n\t\tUNIVERSITY OF OKARA ";
	cout<<"\n\t\t##############################";
	cout<<"\n\t\tENTER THE NAME OF CANIDATES \t : ";
	cin>>name;
	cout<<"\n\t\tFATHER NAME OF CANIDATES \t : ";
	cin>>father_name;
	cout<<"\n\t\tENTER YOUR ID CARD NUMBER \t : ";
	cin>>cnic;
	cout<<"\n\t\tENTER THE ADRESS \t : ";
	cin>>adress;
	cout<<"\n\t\tENTER THE DEPARTMENT IN WHICH YOU ADMISSION \t : ";
	cin>>department;
	cout<<"\n\t\tENTER MATRIC MARKS \t : ";
	cin>>matric_marks;
	cout<<"\n\t\tENTER INTERMEDITE MARKS \t : ";
	cin>>inter_marks;
	matric_percentage=(matric_marks/1100)*0.30*100;
	inter_percentage=(inter_marks/1100)*0.70*100;
	 aggregate = matric_percentage+inter_percentage;
	 cout<<"\n\t\t############################################################";
	cout<<"\n\t\tYOUR AGGERGATE : "<<aggregate<<endl;
	
if( aggregate>=70)
{
	cout<<"\n\t\t############################################################";
	cout<<"\n\t\tCONGRAGULATION! YOU ARE SELECTED AND PAY FEE FIRST SEMESTER ";
	cout<<"\n\t\t############################################################";

}
if( aggregate<=69)
{
	cout<<"\n\t\t############################################################";
	cout<<"\n\t\tSORRY! YOU ARE NOT SELECTED YOUR AGGERGATE IS LESS THAN 70";
	cout<<"\n\t\t############################################################";
}

}

