#include<iostream>
#include<conio.h>
using namespace std;
class student {
protected:
    int user[2][3];
public:

    void get() {
        for(int i=0;i<2;i++)
        {
        	
		  for(int j=0;j<3;j++)
		  {
		   cin>>user[i][j];
           }
		}
        
    }
    
};

class second  {
	protected:
    int sm[2][3]; // sm = second  mark
public:

    void getsm() {
        
        for(int i=0;i<2;i++)
        {
        	
		    for(int j=0;j<3;j++)
		    {
		     cin>>sm[i][j];
        }    }

    }
};


class statement : public student: public second  {
    int tot[2][3];
public:

    void display() {
         for(int i=0;i<2;i++)
        {
        	
		  for(int j=0;j<3;j++)
		  {
		   tot[i][j]=user[i][j]+sm[i][j];
           }
    }
};

main() 
{
    
    student obj;
    obj.get();
    obj.getsm();
    obj.display();
    
}
