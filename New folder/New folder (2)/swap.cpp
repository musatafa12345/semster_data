#include<iostream>
using namespace std;


int main()
{
	int fee[5][2];
	int n,temp;
	cout<<"Enter the number is student = ";
	cin>>n;
	
	for(int i=0;i<n;i++)
   {
	
     	for(int j=0;j<n;j++)
	   {
	   if(j==0)
	   {
	
	     cout<<"Enter the reg no = ";
	     cin>>fee[i][j];
        }
           else 
          {
           cout<<"Enter your fee = ";
            cin>>fee[i][j];
	       }
       }
   }
temp=fee[0][0];
fee[0][0]=fee[n-1][n-1];
fee[n-1][n-1]=temp;

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(j==0)
		{
			cout<<fee[i][j];
			cout<<"\t";
			
		}
		else
		{
			cout<<fee[i][j];
		}
	}
	cout<<endl;
}

system("pause");
}  
