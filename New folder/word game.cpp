#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>
using namespace std;

int main()
{
	string word[7]={"mustafa","gulfam","ali",
	                             "hamza","umair","abdullah","moqeet"};
	                             
  ///////////////copy
  string words;
    strcpy( words, word);
    cout<<word;    
	//////////////rendom///////////
	srand(time(0));
	string x=word[rand()%7];
	cout<<x;
	
	              
}
