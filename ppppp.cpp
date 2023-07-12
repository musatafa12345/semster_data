#include<iostream>
#include<conio.h>
using namespace std;
class frist {
protected:
    int user[2][3];
public:

    void get() 
	{
        for(int i=0;i<2;i++)
        {
        	
		  for(int j=0;j<3;j++)
		  {
		  	cout<<"enter number of 1st array:";
		   cin>>user[i][j];
           }
		}
        
    }
    
};

class second  {
	protected:
    int sm[2][3]; // sm 
public:

    void getsm() 
	{
        
        for(int i=0;i<2;i++)
        {
        	
		    for(int j=0;j<3;j++)
		    {
		    	cout<<"\nenter number of 2nd array:";
		     cin>>sm[i][j];
        }    }

    }
};


class statement : public frist , public second  {
    double tot[2][3];
public:

    void display() 
	{
         for(int i=0;i<2;i++)
        {
        	
		    for(int j=0;j<3;j++)
		    {
		     tot[i][j]=tot[i][j]+user[i][j]+sm[i][j];
             }
        }
        cout<<"sum  of array:"<<tot;
    }
};

main() 
{
    
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    
}
