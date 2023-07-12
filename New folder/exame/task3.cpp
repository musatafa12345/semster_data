#include<iostream>
using namespace std;


main()
{
	int array[]={3,5,7,9,11,13,15,17,19,21};
	 int num;
	 cout<<"Enter a number : ";
	 cin>>num;
	 for(int i=0;i<10;i++){
	 	if(num==array[i]){
	 		cout<<"number was found : "<<num<<endl;
	 		cout<<"array index : "<<i<<endl;
	 		cout<<"array adress : "<<&array[i];
	 		break;
		}
		else{
			cout<<"your number is not found : "<<i<<endl;
			break;
		
		}
		
		 
	 }
	 
}

