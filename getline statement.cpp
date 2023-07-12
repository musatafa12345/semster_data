#include<iostream>
#include<cstring>
using namespace std;
int main()
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_ABOUT_LENGTH 500
{
	char name[MAX_NAME_LENGTH],address[MAX_ADDRESS_LENGTH],about[MAX_ABOUT_LENGTH];
	cout<<"Enter your name "<<"\n";
	cin.getline(name,MAX_NAME_LENGTH);
	cout<<"Enter you address"<<"\n";
	cin.getline(address,MAX_ADDRESS_LENGTH);
	cout<<"Enter you about(Enter # to complte)"<<"\n";
	cin.getline(about,MAX_ABOUT_LENGTH,'#');
	
	
	cout<<"\n Enter details is :\n";
	cout<<"name is:"<<name<<endl;
	cout<<"address is:"<<address<<"\n";
	cout<<"about is:"<<about<<"\n";
	 
	 return 0;
	 
	}
	
	 
