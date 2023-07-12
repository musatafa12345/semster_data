#include<iostream>
using namespace std;
int main()
{
	int temp[7] ;
	int sum=0;
	///////////////in put form user/////////////
	for (int i=0;i<7;i++)
	{
	    cout<<"Enter the temparture of the day"<<i+1<<endl;
		cin>>temp[i];
		sum=sum+temp[i];	
	} 
	//////////out put of temparture////////
	for(int i=0;i<7;i++)
	{
		cout<<"The temparture of "<< i+1 <<"day = "<<temp[i]<<endl;
	}
	//////////////////min max//////////////
	int max,min;
	max=temp[0];
	min=temp[0];
	for(int i=0;i<7;i++)
	{
		if(max<temp[i])
		{
			max=temp[i];
		}
		if(min>temp[i])
		{
			min=temp[i];
		}
	}
////////////////out put///////
	cout<<"maxmum temparture is = "<<max<<endl;
	cout<<"minmum temparture is = "<<min<<endl;
	cout<<"total sum of weak temp = "<<sum<<endl;
/////////////average out put //////////
float avg;
avg=sum/7;
/////////out put average//////
cout<<"Average of temparture is = "<<avg;
	
}
