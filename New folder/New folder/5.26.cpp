#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int choice, months;
	float charges;
	cout<<"health club membership menu\n\n";
	cout<<"1. standard adult membership\n";
	cout<<"2. child membership\n";
	cout<<"3.senior citizen membership\n";
	cout<<"4. quit the program\n\n";
	cout<<"enter your choice:";
	cin>>choice;
	if(choice>=1 && choice<=3)
	{
		cout<<"for how many months?";
		cin>>months;
		switch(choice)
		{
			case 1:
				{
				
				charges=months*50;
			}
				break;
			case 2:
				{
				charges=months*20;
			}
				break;
			case 3:
			  {
				 charges=months*30;
			}
			    break;
		}
		cout<<"the total charges are Rs."<<charges<<endl;
	}
	else if(choice!=4)
	{
		cout<<"the valid choices are 1 to 4.\n";
		cout<<"run th program again and select one of these.\n";
	}
	return 0;
}
