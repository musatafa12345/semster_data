#include<iostream>
using namespace std;


main()
{
	int array[]={34,35,36,37,38,39,40};
	int size=sizeof(array)/sizeof(array[0]);
	int minmum=array[0],maximum=array[0];
	
	for(int i=0;i<size;i++){
		
		if(array[i]>maximum){
			maximum=array[i];
		}
		if(array[i]<minmum){
			minmum=array[i];
		}
		
	}
	
	cout<<"\n\nlargest number : "<<maximum<<endl;
	cout<<"smallest number : "<<minmum<<endl;
	cout<<"Name :  zian kaleem"<<endl;
	cout<<"Reg no : FA20-bcs-150"<<endl;
}

