#include<iostream>
#include<cstring>
using namespace std;


main()
{
	cout<<" \n\n\t\t::::: HEALTH CLUB :::::\n\n";
	int rate=0;
	int month=0;
	cout<<"\n\t\t1: stander adult member ship ";
	cout<<"\n\t\t2: child adult member ship";
	cout<<"\n\t\t3: senior adult member ship";
	cout<<"\n\t\t4: Exist";
	
	cout<<"\n\t\tchose\t";
	int chose;cin>>chose;
	
	switch(chose){
		case 1:
		{
			rate=50;
			cout<<"\n\t\t1: inform";
			cout<<"\n\t\t2: active";
			cout<<"\n\t\tchose\t";
			cin>>chose;
			switch(chose)
			{
				case 1:
				{
					cout<<"\n\t\tRate of member ship par month is = "<<rate;
					break;
				}
				case 2:
				{
					cout<<"\n\t\tEnter how many month you whant : ";
					cin>>month;
					cout<<"\n\t\tyour member ship is active ";
					cout<<"\n\t\tyou'r bill is = "<<rate*month;
					break;
				}
			break;		
			}
		break;	
		}
		case 2:
		{
			rate=20;
			cout<<"\n\t\t1: inform";
			cout<<"\n\t\t2: active";
			cout<<"\n\t\tchose\t";
			cin>>chose;
			switch(chose)
			{
				case 1:
				{
					cout<<"\n\t\tRate of member ship par month is = "<<rate;
					break;
				}
				case 2:
				{
					cout<<"\n\t\tEnter how many month you whant : ";
					cin>>month;
					cout<<"\n\t\tyour member ship is active ";
					cout<<"\n\t\tyou'r bill is = "<<rate*month;
					break;
				}
			break;		
			}
		break;	
		}
		case 3:
		{
			rate=30;
			cout<<"\n\t\t1: inform";
			cout<<"\n\t\t2: active";
			cout<<"\n\t\tchose\t";
			cin>>chose;
			switch(chose)
			{
				case 1:
				{
					cout<<"\n\t\tRate of member ship par month is = "<<rate;
					break;
				}
				case 2:
				{
					cout<<"\n\t\tEnter how many month you whant : ";
					cin>>month;
					cout<<"\n\t\tyour member ship is active ";
					cout<<"\n\t\tyou'r bill is = "<<rate*month;
					break;
				}
			break;		
			}
		break;	
		}
		case 4:
		{
			break;
		}
    }
   
}


