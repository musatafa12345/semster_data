#include<iostream>
using namespace std;


main()
{
	int odd_number[]={3,5,7,9,11,13,15,19,21};
	int i=0;
	int num=sizeof(odd_number)/sizeof(odd_number[0]);
	while(i<num){
		cout<<odd_number[i]<<",";
		i++;
	}
	
}

