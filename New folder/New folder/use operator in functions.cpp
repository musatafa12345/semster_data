#include<iostream>

using namespace std;

void sum()
{float n1,n2;
cout<<"enter the first number"<<endl;
cin>>n1;
cout<<"enter the second number"	<<endl;
 cin>>n2;
 cout<<"the sum of ="<<n1+n2<<endl;       
}
void subtraction()
{   float n1,n2;
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    cout<<"the subtraction is ="<<n1-n2<<endl;
	}
void multiplication()
{ int n1,n2;
cout<<"enter the first number "<<endl;
cin>>n1;
cout<<"enter the second number"<<endl;
cin>>n2;
cout<<"the multiplication is ="<<n1*n2<<endl;
	
}

void division()
{ float n1,n2;
cout<<"enter the first number "<<endl;
cin>>n1;
cout<<"enter the second number"<<endl;
cin>>n2;
cout<<"the division is ="<<n1/n2<<endl;
	
}





//menu 
main()
{    
 int n;
while(n!=5)
{

      
	cout<<"press 1 for addition "<<endl;
	cout  <<"press 2 for subtraction"<<endl;
	cout<<"press 3 for multi[lication"<<endl;
	cout<<"press 4 for division"<<endl;
	cout<<"Enter 5 to exist"<<endl;
//	cin>>i;
      
	cin>>n;
	
      
      if(n==1)
      sum();
      else if (n==2)
      subtraction();
      else if (n==3)
      multiplication();
      else if (n==4)
      division();
	else 
	{
	cout<<"invalid"<<endl;
}
	
	system("cls");
}
system("pause");
}
