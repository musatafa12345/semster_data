#include<iostream>
#include<cstring>

using namespace std ;

/////////////////////////name and account nbr user////////////
string inform()
{
	string name,gendar;
	int account;
	cout<<"Enter you name = ";
	cin>>name;
	cout<<"\n\n";
	cout<<"Enter you'r Account number = ";
	cin>>account;
	cout<<"\n\n";
	cout<<"Tell about you'r gendar = ";
	cin>>gendar;
	cout<<"\n\n";
}


////////////////input//////job and bussinas houw much money you earn////////////////

int earn( int money,int year,string job)
{
	
	cout<<"Enter  the about you'r job or business  = ";
	cin>>job;
	cout<<"\n\n";
	cout<<"Enter  how much you earn money  in  one year's  = ";
	cin>>money;
	cout<<"\n\n";
	
	cout<<"Enter how many year you doing your job  = ";
	cin>>year;
}



//////////////////////////main body///////////////////////////
int main()
{
	long int a;int b;string c;
	inform();
   earn( int money,int year,string job);
	system("pause");
}
