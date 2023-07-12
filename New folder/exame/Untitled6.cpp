#include<iostream>
using namespace std;
int main(){
	int n=6;
	int array_affan[n],array_temp[n];
int temp;

for(int i=0;i<6;i++)
{
cout<<"enter number";
cin>>array_affan[i];
array_temp[i]=array_affan[i];
}
for(int i=0;i<6;i++){
	cout<<"\norginal array : "<<array_affan[i];
}

//reverse funtion
int j=n-1;
for(int i=0;i<j;i++,j--){

 temp=array_affan[i];
 array_affan[i]=array_affan[j];
 array_affan[j]=temp;
	
}
for(int i=0;i<6;i++){
	cout<<"\nresvers : "<<array_affan[i]<<endl;
}
for(int i=0;i<6;i++){
	if(array_temp[i]==array_affan[i]){
		cout<<"palindrome : ";
		break;
	}else{
		cout<<"not palindrome : ";
	}
}
}

