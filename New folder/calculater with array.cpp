#include<iostream>
using namespace std;

void sum(int n){
	
		double num[n];
		double sum=0;
	
	for(int i=0;i<n;i++){
		
		cout<<"Enter the value : ";
		cin>>num[i];
		sum=sum+num[i];
	}
	cout<<"\nAnswer : "<<sum;
}
void sub(int n){
	
		int num[n];
		int sub=0;
	
	for(int i=0;i<n;i++){
		
		cout<<"\nEnter the value : ";
		cin>>num[i];
		sub-=num[i];
	}
	cout<<"\nAnswer : "<<sub;
}
void mult(int n){
	
		double num[n];
		double mult=1;
	
	for(int i=0;i<n;i++){
		
		cout<<"\nEnter the value : ";
		cin>>num[i];
		mult*=num[i];
	}
	cout<<"\nAnswer : "<<mult;
}


void div(int n){
	
		
		double dividend[n],divisor[n],div[n];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
		if(i==0){
		
		cout<<"\nEnter the value dividend : ";
		cin>>dividend[j];
	}
		else
		{
		
		cout<<"\nEnter the value divisor : ";
		cin>>divisor[j];
	}
		}
	}
			for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			div[j]=dividend[j]/divisor[j];
		}
}
	for(int i=0;i<n;i++)
	cout<<"\nAnswer : "<<div[i];
}
main()
{
	int chose;
	
      
      cout<<"1: for sum \n";
      cout<<"2: for subtarct \n";
      cout<<"3: for multiplcation \n";
      cout<<"4: for division \n";
      cin>>chose;
	switch(chose){
		case 1:{
			int n,chose;
        	cout<<"\nhow many value you whant to enter : ";
            cin>>n;
            sum(n);
			break;
		}
			case 2:{
			int n,chose;
        	cout<<"how many value you whant to enter : ";
            cin>>n;
            sub(n);
			break;
		}
			case 3:{
			int n,chose;
        	cout<<"how many value you whant to enter : ";
            cin>>n;
            mult(n);
			break;
		}
			case 4:{
			int n,chose;
        	cout<<"how many value you whant to enter : ";
            cin>>n;
            div(n);
			break;
		}
		default :{
			cout<<"You enter worng number : ";
			break;
		}
	}

}

