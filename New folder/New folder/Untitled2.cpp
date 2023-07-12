#include<iostream>
using namespace std;




int main()
{
	int x=5;//////int variable 
	int* intre;////pointer declare
	
   intre=&x;///giving value to pointer
    
	cout<<*intre;//////print  value of x pointer 
	cout<<endl;
	cout<<&intre;///////print value of x adress
	
	
}
