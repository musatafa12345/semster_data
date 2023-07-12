#include<iostream>
using namespace std;

main()
{
int op;	
while(op!=5)
{
		
	
	cout<<"\n\n\n\n";
	cout<<"\t\tEnter 1 to convart pound in U.S $  "<<endl;
	cout<<"\t\tEnter 2 to convart pound in french $ "<<endl;
	cout<<"\t\tEnter 3 to convart pound in German $ "<<endl;
	cout<<"\t\tEnter 4 to convart pound in japanese $  "<<endl;
	cout<<"\t\tEnter 5 to exist"<<endl;
   cout<<"\t\t";cin>>op;
   system("cls");
	switch(op)
    {
			case 1:
		{
			float x,dollar,total;
			cout<<"\t\tEnter the pound = "<<endl;
   cout<<"\t\t";			cin>>x;
   system("cls");
			dollar=1.487;
			total=x*dollar;
			cout<<"\n\t\tyour money in U.S $ is = "<<total<<"$"<<endl;	
		}
		break;
		case 2:
		{
			float x,dollar,total;
			cout<<"\n\t\tEnter the pound = "<<endl;
cout<<"\t\t";		cin>>x;
system("cls");
			dollar=0.172;
			total=x*dollar;
			cout<<"\n\t\tyour money in French $ is = "<<total<<"$"<<endl;	
		}
		break;
		case 3:
		{
			float x,dollar,total;
			cout<<"\t\tEnter the pound = "<<endl;
	cout<<"\t\t";		cin>>x;
	         system("cls");
			dollar=0.058;
			total=x*dollar;
			cout<<"\n\t\tyour money in German $ is = "<<total<<"$"<<endl;	
		}
		break;	
		case 4:
		{
			float x,dollar,total;
			cout<<"\t\tEnter the pound = "<<endl;
		cout<<"\t\t";	cin>>x;
			dollar=0.00995;
			total=x*dollar;
			cout<<"\t\tyour money in japanes $ is = "<<total<<"$"<<endl;	
		}
		break;	
		
    }
	
	
}

	
	
}
