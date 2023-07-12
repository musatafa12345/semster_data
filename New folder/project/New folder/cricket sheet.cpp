#include<iostream>
#include<cstring>
using namespace std ;

/////////////////////////////////


main(){
	///////////////////////
	int over,out,player,date;
	double total_run,run[10];
	string batsman,blower,team_name[2],vanue,winer,loser;
	char toss_win[50],toss_lose[50];
	///////////////////
	over=0;
	total_run=0;
	////////toss win lose/////////////
	cout<<"Which team win the toss : ";
	cin>>toss_win;
	cout<<"\n\nWhich team lose the toss : ";
	cin>>toss_lose;
	///////////vanue///////////
	cout<<"\nWrite the name of where match play : ";
	cin>>vanue;
	///////////date//////////////
	cout<<"Enter the Date : ";
	cin>>date;
	////////////team name//////////////////
	for(int i=0;i<2;i++)
	{
		if(i==0)
		{
			cout<<"Enter the name of home team : ";
			cin>>team_name[i];
		}
		else {
				cout<<"Enter the name of away team : ";
			cin>>team_name[i];
		}
	}
	/////////decided over and player///////////
	cout<<"Enter the how many over in the match : ";
	cin>>over;
	int balls=balls+over*6;
	cout<<"Enter the how many player play for each team : ";
	cin>>player;
	/////////////batsman//////////////
	 
		int j=0; 
		int i=0;
		while(j<player||i<balls)
		{
			
			cout<<"after every ball press out for(0)not out(9)";
		   cout<<"\nrun of batsman:"<<j+1<<" : ";
		    cin>>run[i];cin>>out;
		    total_run=+run[i];
		    if(out==0)
		    {
				j++;
			}
			
			i++;
	    }
	cout<<"total run first team : "<<total_run;
	cout<<total_run;
	return 0;
}
