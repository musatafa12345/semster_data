#include<iostream>
using namespace std;


main()
{
	int num,i=1;
	cout<<"\n\t\tenter the number for table : ";
	cin>>num;
	
	while(i<=10){
		if(num>=3&&num<=20){
			cout<<"\n\t\t"<<num<<" * "<<i<<" = "<<num*i;
		}
		else{
			cout<<"\n\t\tyou enter worg num";
			break;
		}
		i++;
	}

}

