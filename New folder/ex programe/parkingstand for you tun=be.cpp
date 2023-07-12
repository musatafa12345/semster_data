#include<iostream>
using namespace std;
///now try your self thanku for watching
/////today we make parking mangment sysatem 
////// parking system programe
main()
{
	/// we need decalre price,
	int bike=80;
	int cycle=30;
	int rikhsa =100;
	int car=150;
	////vichel conter creat 
	int count=0;
	/////// total counter
	double total;
	
	//type of vichel stand in parking area
	/// we  use do while or while loop to reapte our self
	// i use do while
	int x=0;
  do
  {
  
	
	cout<<"1 : motar bike  \n";
	cout<<"2 : cycle   \n";
	cout<<"3 : rikhsa  \n";
	cout<<"4 : car   \n";
	cout<<"5 : total vichel stand in parking \n";
	cout<<"6 : total money today we get \n ";
	int type;
	cin>>type;
	switch(type)
	{
		case 1:
			{
			    cout<<" the price of motar bike is :"<<bike;
			    count++;
			    total=total+bike;
		
			}
		break;
		case 2:
			{
				cout<<" the price of cycle is :"<<cycle;
			    count++;
			    total=total+cycle;
			}
		break;
		case 3:
			{
				cout<<" the price of riskha is :"<<rikhsa;
			    count++;
			    total=total+rikhsa;
			}
		break;
		case 4:
			{
				cout<<" the price of car is :"<<car;
			    count++;
			    total=total+car;
			}
		break;
		case 5:
			{
				cout<<"total vichel stand in parkig stand : "<<count;
				
			}
		break;
		case 6:
			{
				cout<<"total price today earn :"<<total;
				
			}
		break;
		default :
			{
				cout<<"error enter worng number : ";
			}
	 }
	 cout<<"\nenter 5 for exist (only intger type allow) ";
	 cin>>x;
  }  while(x!=5);

}
 
