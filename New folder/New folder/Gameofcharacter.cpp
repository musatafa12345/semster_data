#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char password[22];
	char copy_password[22];
	int length_of_password;
	char guess;
	int chances=5;
	int flag=0;
	int flag2;
///////////////////////////copy of char array and find length of array/////////////	
	cout<<"Enter password  = ";
	cin>>password;
//	copy_password=password;  Error because array can not copy in this way
	strcpy(copy_password,password);
	cout<<"Your password is = "<<password<<endl;
	cout<<"Your password is = "<<copy_password<<endl;
	length_of_password=strlen(copy_password);
	cout<<length_of_password<<endl;
	system("cls");// clear screen 
	///////////////////////////////hide word////////////////
	for(int i=0;i<length_of_password;i++)
	{
		copy_password[i]='*';
		
	}
	cout<<"Your password is = "<<copy_password<<endl;
	//////////////////////////////////////////////////
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
//	cout<<guess<<endl;
	while(chances>0)
	{
		flag = 0;
		for(int i=0;i<length_of_password;i++)
		{
			if(guess==password[i])
			{
				copy_password[i]=guess;
				flag=1;
				
			}
		//	cout<<copy_password<<endl;
		}
		cout<<copy_password<<endl;
		if(flag==0)
		{
			chances--;
		}
		
		if(chances == 0)
		{
			cout<<"You Loss"<<endl;
			break;
		}
		else
		{
			flag2=0;
			for(int i=0;i<length_of_password;i++)
			{
				if(copy_password[i]=='*')
				{
					flag2=1;
				}
				
			}	
			if(flag2==0)
			{
				cout<<"Congradulation you guess password "<<endl;
				cout<<"*****YOU WIN*****"<<endl;
				break;
			}
		}
		cout<<"Enter character to guess password "<<endl;
		cout<<"You have "<<chances<<" chances"<<endl;
		cin>>guess;
	}
	
	
	return 0;
}
