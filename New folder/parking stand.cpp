#include<iostream>
using namespace std;

void starline()
{
	for(int i=1;i<30;i++)
	{
		cout<<"*";
	}
}

int main()
{
	//////////// compny name///////////
    starline();
	cout<<"\nKHAN PARKING STAND"<<endl;
	starline();
	////////////////////////////////////////
	int amount,count;
	amount=0;
	count=0;

	char i;
do
{
	/////////////////////input user//////menu//////
	int x;
	cout<<"\nEnter 1 for the rickshaw number = "<<endl;
	starline();
	cout<<"\nEnter 2 the for car number = "<<endl;
	starline();
	cout<<"\nEnter 3 the for motarcycle number = "<<endl;
	starline();
    cout<<"\nEnter 4 the for bus number = "<<endl;
    starline();
    cout<<"\nEnter 5 total amount and vichel stand in parking stand= "<<endl;
    starline();cout<<endl;
    cin>>x;
    //////////////parice/////////////////
    int m,c,r,b;
    m=20;
	r=50;
	c=80;
	b=100;
	
    //////////////////////////////////////////
 
    switch(x)
    {
    	case 1:
    		{
    			
    			cout<<"parice = "<<r;
    			count++;
    			amount=amount+r;
			}
			break ;
		case 2:
    		{
    			
    			cout<<"parice = "<<c;
    			count++;
    			amount=amount+c;
			
			break ;
		case 3:
    		{
    			
    			cout<<"parice = "<<m;
    			count++;
    			amount=amount+m;
			}
			break ;
		case 4:
    		{
    			
    			cout<<"parice = "<<b;
    			count++;
    			amount=amount+b;
			}
			break ;
		case 5:
    		{
    			
    			cout<<"totala vichel in parking stand = "<<count<<endl;
    			starline();
    			cout<<"total amount = "<<amount<<endl;
    			starline();
    			
			}
			break ;	
        }
     }  cout<<"\nyou whant to exist press (y) "<<endl;
	    cin>>i;
   }while(i!='y');
  
  return 0;  system("pause");
}  
