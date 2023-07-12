#include<iostream>
using namespace std;

void sum(int n1,int n2)
{
//	int n1,n2;
	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Sum is this = "<<n1+n2<<endl;
}
void sub(int n1,int n2)
{
  // int n1,n2;
	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Subtraction  is this = "<<n1-n2<<endl;
}
void multi(int n1,int n2)
{
//   int n1,n2;
	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Multiplication  is this = "<<n1*n2<<endl;
}


void divi(double n1,double n2)
{
//    float n1,n2;
 	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Division  is this = "<<n1/n2<<endl;
}
////////menu////////////////////////
void menu()
{
/*	int s_index=sum();
	int su_index=sub();
	int mul_index=multi();
	int di_index=divi();*/
//	divi(double n1,n2);
///	multi( n1,n2);
//	sum( n1,n2);
//	sub( n1,n2);
	int n;
	cout<<"Press 1 for addition"<<endl;
	cout<<"Press 2 for subtraction"<<endl;
	cout<<"Press 3 for Multiplication"<<endl;
	cout<<"Press 4 for division"<<endl;
	cin>>n;
	if(n==1)
         sum();
		else if(n==2)
		sub();
		else if(n==3)
		multi();
		else if(n==4)
		divi();
		else
		cout<<"You enter invalid number"<<endl;
}

////////Menu////////int main()
int main()
{
	
	void menu();
	 
	///////////////Function call and if Body/////
	
		return 0;
		system("pause");
	
	
	
	
}
