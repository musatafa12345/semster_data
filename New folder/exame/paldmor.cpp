#include<iostream>
using namespace std;


main()
{
   int reminder,sum[6];    
   int number[6];
   int temp[6];   
  for(int i=0;i<6;i++){
  	cout<<"Enter number : ";
  	cin>>number[i];
  	temp[i]=number[i];
  }
  
  for(int i=0;i<6;i++){
  	
  while(number[i]>0){    
   reminder=number[i]%10;    
   sum[i]=(sum[i]*10)+reminder;    
   number[i]=number[i]/10;    
  }
}

  for(int i=0;i<6;i++){
  	if(sum[i]==temp[i]){
   	cout<<"palindrome number : "<<temp[i]<<endl; 
  }
  else {
   cout<<"\nnot palindrome : "<<temp[i]; 
   }	
 } 
  
}  


