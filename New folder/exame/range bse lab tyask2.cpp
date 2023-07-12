#include<iostream>
using namespace std;


main()
{

    int * array;
	array=new int[10];
	for(int i=1;i<10;i++){
			if(i%2!=0){
				array[i]=i;
			}
	}
	
	for(int n=0;n<10;n++){
		
		cout<<array[n]<<endl;
	}
	
}

