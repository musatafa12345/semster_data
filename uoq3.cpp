#include<iostream>
using namespace std;

main()
{
	
	int tic;
	
	while(true)
	{
		int tic;
	cout<<"\t\t1 - 4 price Rs:200\n";
	cout<<"\t\t5 - 6 price Rs:150\n";
	cout<<"\t\t7 - above price Rs:100\n\n";
	cout<<"\t\tEnter the how many ticket : "<<endl;
	cout<<"\t\t";cin>>tic;
	
	 if(tic>=1&&tic<=4)
		{
			cout<<"\t\tyour total bill are : "<<tic*200;
		}
			else if(tic>4&&tic<=6)
			  {
			cout<<"\t\tyour total bill are : "<<tic*150;
			  }
				else if(tic>6)
				{
					cout<<"\t\tyour total bill are : "<<tic*100;
					}
						else
							{
								cout<<"error";
									}
		int num;							
		cout<<"\n\n\t\tEnter 0 to exist";
		cin>>num;
		if(num==0)
		{
			break;
				}														
	}
}
