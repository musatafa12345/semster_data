#include<iostream>
#include<cstring>
using namespace std;
void baby(){
char password[22]={"bhutto"};
	char copy_password[22];
	int length_of_password;
	char guess;
	int chances=5;
	int flag=0;
	int flag2;

	
	strcpy(copy_password,password);
	cout<<"Your password is = "<<password<<endl;
	cout<<"Your password is = "<<copy_password<<endl;
	length_of_password=strlen(copy_password);
	cout<<length_of_password<<endl;
	system("cls");
	for(int i=0;i<length_of_password;i++)
	{
		copy_password[i]='*';
		
	}
	cout<<"Your password is = "<<copy_password<<endl;
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
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

	cout<<copy_password<<endl;		}
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
}
	void mommy(){
		
	    char password[22]={"bholarecord"};
		char copy_password[22];
	int length_of_password;
	char guess;
	int chances=5;
	int flag=0;
	int flag2;

	
	strcpy(copy_password,password);
	cout<<"Your password is = "<<password<<endl;
	cout<<"Your password is = "<<copy_password<<endl;
	length_of_password=strlen(copy_password);
	cout<<length_of_password<<endl;
	system("cls"); 
	for(int i=0;i<length_of_password;i++)
	{
		copy_password[i]='*';
		
	}
	cout<<"Your password is = "<<copy_password<<endl;
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
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
}
	void daddy(){
		    char password[22]={"goldleaf"};
			char copy_password[22];
	int length_of_password;
	char guess;
	int chances=5;
	int flag=0;
	int flag2;

	
	strcpy(copy_password,password);
	cout<<"Your password is = "<<password<<endl;
	cout<<"Your password is = "<<copy_password<<endl;
	length_of_password=strlen(copy_password);
	cout<<length_of_password<<endl;
	system("cls"); 
	for(int i=0;i<length_of_password;i++)
	{
		copy_password[i]='*';
		
	}
	cout<<"Your password is = "<<copy_password<<endl;
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
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
	
	}
	
	
 int main()
{
	cout<<"             ";
	cout<<"**********SOPS KA DYAN RAKTA HOWA IS PROGRAM KA ISTAMAL KI JIY**********"<<endl;
	cout<<"\n\n\n";
	cout<<"             ";
		cout<<"**********APNA BACHON KO POLYO SA BACHAIN OR UNHA KATRAIN PILAIN**********"<<endl;
	cout<<"\n\n\n";



	cout<<"Hint for 1: it is a sweet miracle which turns depression into smoke"<<endl;
	cout<<"hint for 2: he is famous tiktoker"<<endl;
	cout<<"hint for 3: it is a politician who is dead but considered alive"<<endl;
int pass;
cout<<" enter the no for random password 1 for easy word 2 for medium 3 for difficult"<<endl<<1<<endl<<2<<endl<<3<<endl<<endl;
cin>>pass;
	
if(pass==1){
	baby();
}else if(pass==2){
	mommy();
}else if (pass==3){
	daddy();
}else{
  cout<<"wrong selection"<<endl;
}
	
}
