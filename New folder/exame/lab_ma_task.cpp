#include<iostream>
using namespace std;


main()
{
	int n,i;
	float num[100],sum=0.0,avrage;
	cout<<"\t******************************************";
	cout<<"\n\n\t\tEnter the number of data : "<<endl;
	cout<<"\t\t";cin>>n;
	cout<<"\n\n\t*******************************************";
	while(n>100||n<=0){
		cout<<"\n\n\t********************************************";
		cout<<"\n\t\tError ! Range of number  0 ->> 100 "<<endl;
		cout<<"\t\t";cin>>n;
		cout<<"\n\n\t*********************************************";
		
	}
	for(int j=1,i=0;i<n;j++,i++){
		cout<<"\n\n\t******************************";
		cout<<"\n\n\t\t"<<j<<": furter the number = ";
		cout<<"\t\t";cin>>num[i];
		sum=sum+num[i];
		cout<<"\n\n\t******************************";
	}
	avrage=sum/n;
	cout<<"\n\n\t******************************";
	cout<<"\n\n\t\tAvrage : "<<avrage;
	cout<<"\n\n\t******************************";
}

