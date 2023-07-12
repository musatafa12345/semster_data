#include<iostream>
using namespace std;


main()
{
	int num=65;
	int binary[50];
	for(int i=0;i<50;i++){
		binary[i]=num%2;
		if(num%2==0){
			break;
		}
		
	}
	for(int i=0;i<50;i++){
		
		cout<<binary[i];
		if(binary[i]==0){
			break;
		}
	}
	
	
}

