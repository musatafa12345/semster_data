#include<iostream>  
using namespace std; 
   
int main() 
{
	double i,n, s = 0.0;
	 
	cout<<"\n\n\t\tEnter the number = ";
	cin>>n;
   
  for(i = 1; i <= n; i++)
  {
     s = s + 1 / i; 
   }
    
      cout << "\n\n\t\tSum is " << s; 
    return 0; 
}
