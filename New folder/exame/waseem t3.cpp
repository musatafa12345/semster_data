#include<iostream>
using namespace std;


main()
{
	int array_number[]={120,121,116,118,122,110,112,115,153,156};
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	int num=sizeof(array_number)/sizeof(array_number[0]);	
	int i=0;
	while(i<num){
		if(number==array_number[i]){
			cout<<"\nNumber was found : ";
			cout<<"\nindex of array : "<<i;
			cout<<"\nlocation of array : "<<&array_number[i];
			break;
		}
		else{
			cout<<"number was not found : ";
			break;
		}
		i++;
	}
}

