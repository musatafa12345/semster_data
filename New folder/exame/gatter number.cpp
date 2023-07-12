#include<iostream>
using namespace std;


main()
{
	
	int num[]={10,5,20,15000,100};
	int max=0;
	for(int i=0;i<5;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	cout<<max;
}

