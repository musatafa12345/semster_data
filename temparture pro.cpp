#include<iostream>
using namespace std;
int main()
{
    /////////////gobal value//////////////
    long int temp[5];
	double sum;
	int max,min;
	max=temp[0];
    min=temp[0];
	sum=0;
	////////////////input////////////////
	for(int x=0;x<5;x++)
	{
		cout<<"Enter the temparture "<<x+1<<" day =";
		cin>>temp[x];
		sum=sum+temp[x];
		max=temp[x];
	}cout<<endl;
	//////////////////////print////////////////
		for(int x=0;x<5;x++)
	{
		cout<<" The temparture of"<< x+1 <<"day ="<<temp[x]<<endl;
	}
	//////////////////max min///////////////
	for(int i=1;i<5;i++)
	{
		if(max<temp[i])
		{
			max=temp[i];
		}
	}
	cout<<"total temparture is = "<<sum;

	return 0;
	system("pause");
}
