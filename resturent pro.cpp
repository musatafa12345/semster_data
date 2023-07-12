#include<iostream>
using namespace std;
int main()
{
	cout<<" menu of break fast"<<endl; //print menu 
//	cout<<"Enter 2 to saw menu of lanuch"<<endl;
//	cout<<"Enter 3 to saw menu of dinner"<<endl;
//	int a;
//	cin>>a;
//	if(a==1)  // if condtion is true print the menu of break fast
string x;
  do	{ char answer;
		int a=150,b=80,c=30,d=100;
		cout<<"A: siripaya"<<endl;
		cout<<"B: halwa poori"<<endl;
		cout<<"C: paratha"<<endl;
		cout<<"D: egg bread"<<endl;
		cin>>answer;
		if(answer=='a'||answer=='A')
		{
			cout<<"your bill is "<<a<<endl;
		}
	       	if(answer=='b'||answer=='B')
	       	{
		        	cout<<"your bill is "<<b<<endl;
	        	}
		
		              	if(answer=='c'||answer=='C')
	                    	{
		                     	cout<<"your bill is "<<c<<endl;
                       		}
             
	     	if(answer=='d'||answer=='D')
	        	{
		    	   cout<<"your bill is "<<d<<endl;
	            	}
			cout<<" you whant to saw again menu enter yes"<<endl;
			cin>>x;	           		
	}while(x!="no");
}

