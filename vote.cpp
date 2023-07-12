#include<iostream>
using namespace std ;
int main()
{
	start:
	cout<<"Enter you are age "<<endl;
	int a;
	cin>>a;
	if(a>=18)
	{
	cout<<"You are eleigibe for vote"<<"\n"<<"\n"; 
	back:
	cout<<"you whant to give the vote to PLM-N or PTI or PPP "<<"\n"<<endl;
	string name;
	cout<<"Enter name of you chosie= ";
	cin>>name;
	cout<<"You enter :"<<name<<"\n";
	   if(name=="PLM_N")
    	{
    		double vote1;
    		vote1=+1;
    		cout<<"Total vote of PML_N is:"<<vote1;
	    }
	     else if(name=="PTI")
	    {
	    	double vote2;
	    	vote2=+1;
	    	cout<<"Total vote of PTI is:"<<vote2;
	    	
		}
		else if(name=="PPP")
		{
			double vote3;
			vote3=+1;
		    cout<<"Total vote of PPP is:"<<vote3;
			
		}
		goto back;
	
	}
	else
	{
	 goto start; 
	 return 0;
	
	}
	return 0;
	system ("pause");
}
