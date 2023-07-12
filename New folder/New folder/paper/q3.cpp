#include<iostream>
using namespace std;


main()
{
	
	int num;
	cout<<"\n\n";
	cout<<"Enter the number =  ";
	cin>>num;
	while((num%3==0)&&(num%5==0))
	{
		cout<<"number is  divided by 3 or 5"<<endl;	
	}
	cout<<"number is not divided by 3 or 5 "<<endl;

}
