#include <iostream>
#include <cstring>
using namespace std;

void toggle_operation(string word){
	
	for(int i=0;word[i]!='\0';i++)
	{
		if (word[i]>=65 && word[i]<=90 ) {
		        
			word[i] = word[i] + 32;          
	    }   
		 else if (word[i]>=97 && word[i]<=122 ){
			
			    word[i] = word[i] - 32; 
		}
	}


	cout<<"\n\t\tThe converted string : "<<word;
}

int main()
{
	string x;
    cout<<"\n\n\t\tEnter the string : ";
    getline(cin,x);
    toggle_operation(x);
return 0;
}
