#include<iostream>
using namespace std;
void name(){
	
}

main()
{
	int age;
	cout<<"Enter the age : ";
	cin>>age;
	if (age>20&&age<=30){
		int s=7000;
		cout<<"total sallary is :"<<s+1000;
	}
	else if(age>30&&age<=40)
	{
		int s=9000;
		cout<<"total sallary is :"<<s+2000;
	}
	else if(age>40)
	{
		int s=12000;
		cout<<"total sallary is :"<<s+3000;
	}
	else
	{
		cout<<"your not able for bouns ";
	}

}

