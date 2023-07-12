#include<iostream>
#include <time.h>
#include <stdlib.h> 
#include <cstring>
#include <bits/stdc++.h> 

using namespace std;

int random(int x);
int string_len(string s);

void game();

int main()
{
	 game();
	return 0;
}

int random(int x)
{
	srand(time(0));  
	return rand() % x;
}


int string_len(string s)
{
	return	s.length();
}

void game()
{
	char guess;
	int chances=5;
	int flag=0;
	int flag2;
	string words[10]={"apple","ball","cherry","doll","egg","fish","goat","hen","ink","jug"	};
	int R_index=random(10);
	string word=words[R_index];
	int wordlen=string_len(word);
	char O_word[wordlen+1];
	for(int i=0;i<wordlen;i++)
	{
	    O_word[i]=word[i];
		
	}
	char copy_word[wordlen+1];
	for(int i=0;i<wordlen;i++)
	{
		copy_word[i]='*';
	}
	cout<<word;
	cout<<endl<<O_word;
	cout<<endl<<copy_word;
	system("pause");
	system("cls");
	cout<<"Enter character to guess password "<<endl;
	cout<<"You have "<<chances<<" chances"<<endl;
	cin>>guess;
	while(chances>0)
	{
		flag = 0;
		for(int i=0;i<wordlen;i++)
		{
			if(guess==O_word[i])
			{
				copy_word[i]=guess;
				flag=1;
				
			}
		
		}
		cout<<copy_word<<endl;
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
			for(int i=0;i<wordlen;i++)
			{
				if(copy_word[i]=='*')
				{
					flag2=1;
				}
				
			}	
			if(flag2==0)
			{
				cout<<"Congradulation you guess O_word "<<endl;
				cout<<"*****YOU WIN*****"<<endl;
				break;
			}
		}
		cout<<"Enter character to guess O_word "<<endl;
		cout<<"You have "<<chances<<" chances"<<endl;
		cin>>guess;
		
	}
}
	


	
