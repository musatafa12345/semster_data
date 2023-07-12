#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int x=1;
    for(int i=0;i<20;i++)                            //////////For Rows//////
    {  
     for(int j=0;j<10;j++)                      ///////////For columns//////
     { cout<<number*x<<"\t";
        x++; }
    cout<<endl;
    }
    return 0;
    } 
