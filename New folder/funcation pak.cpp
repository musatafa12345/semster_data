#include<iostream>
using namespace std;

void line(int length)
{
	for(int i;i<length;i++)
	{
		cout<<"_";
	}
	
}

//////////////name company///////////
void name(string n)
{

	cout<<endl;
	cout<<n;
}
///////////amount////
int price(int x)
{
	cout<<"price = "<<x;
}
/////////////amount//////////
/*void amount()
{
	int amount=0;
int	cpy_index=price(30);
amount=+cpy_index;
}
*/
///////////////////////////body////////////

void body()
{
	/////////////////////////////////////
	line(100);
	name("MK PARKING STAND LAHORE");
	cout<<endl;
	line(100);
	cout<<endl;
	/////////////////amount and count///////////////////
	int amount=0;
	int count=0;
	//////////////////////////////

char i;	
while(i!='y')
{

	int x;
	line(45);
	cout<<"\nEnter 1 for the rickshaw number   = "<<endl;
	line(45);
	cout<<"\nEnter 2 the for car number        = "<<endl;
	line(45);
	cout<<"\nEnter 3 the for motarcycle number = "<<endl;
	line(45);
    cout<<"\nEnter 4 the for bus number        = "<<endl;
    line(45);
    cout<<"\nEnter 5 amount vichel stand in    = "<<endl;
    line(45);
    cout<<endl;
    cin>>x;
	
	
	///////////////////////////
	//////////////////////////////////////////
 
        switch(x)
       {
    	case 1:
    	    {
              	price(50);
              	count++;
              	amount=+50;
	        }
	        break ;
	    case 2:
           {
    	     	price(80);
    	     	count++;
    	        amount=+80;
        	}
			break ;
	    case 3:
           {
    	        price(20);
    	        count++;
    	        amount=+20;
	        }
	        break ;
	    case 4:
            {
    	        price(120);
    	        count++;
    	        amount=+120;
	        }
	        break ;
	    case 5:
            {
			cout<<"total amount is = "<<amount<<endl;
			line(30);
    		cout<<"\ntotal vichel in = "<<count<<endl;
    		line(30);
	        }
	        break ;	
	        
        }  
     ///////////////////////////  
	 cout<<endl;  
      cout<<"exist(y)"<<endl;
      cin>>i;
      ///////////////cls////////////
      system("cls");
      
    }
} 



/////////////main body/////////
int main()
{

	body();

	return 0;
	system("pause");
}
