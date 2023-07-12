#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;
char password[22];
	char copy_password[22];
	int length_of_password;
void password(pasword[22];)
{
	
	cout<<"Enter password  = ";
	cin>>password;
//	strcpy(copy_password,password);
//	cout<<"Your password is = "<<password<<endl;
//	cout<<"Your password is = "<<copy_password<<endl;
//	length_of_password=strlen(copy_password);
//	cout<<length_of_password<<endl;
	
}


void hideword()
{
	

	for(int i=0;i<length_of_password;i++)
	{
		copy_password[i]='*';
		
	}
	cout<<"Your password is = "<<copy_password<<endl;
	//////////////////////////////////////////////////
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
}
int main()
{

	

	hideword();
	
	system("pause");
	return 0;
}
