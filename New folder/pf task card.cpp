#include<iostream>
using namespace std ;

void able()
{
	float x,y,z;
	x=12;
	cout<<"You are qualify for cerdit card";
	cout<<"interst of one year is = "<<x<<"%";
	
}

void unable()
{
	cout<<"\nYou are not qualify for cerdit card";
	cout<<"\nbecause your income is low and you'r job experness is less than two year";
    
    
}

/*void requarid(int x,long int y)
{
	c
}*/

main()
{
	long int money;int year;string job;
	cout<<"Enter  the about you'r job or business  = ";
	cin>>job;
	cout<<"\n\n";
	cout<<"Enter  how much you earn money  in  one year's  = ";
	cin>>money;
	cout<<"\n\n";
	
	cout<<"Enter how many year you doing your job  = ";
	cin>>year;
	
       if(money >= 17000 && year>=2)
       {
       	 able();
       	 float inte ,x;
       	 x=0.12;
       	 inte=money*x*1;
       	 cout<<"\ninterst of one year is = "<<inte<<endl;
	   }
	   else
	   {
	   	unable();
	   }
	   
	   
}
