#include<iostream>
using namespace std;


main()
{
	double total=0;
	cout<<"\nPackage 1: 1000Rs/month, 10 GB of data is provided. Additional data charges are 50rs/1 GB\n";
	cout<<"\nPackage 2: 1500Rs/month, 20 GB of data is provided. Additional data charges are 30rs/1 GB\n";
	cout<<"\nPackage 3: 2000Rs/month, 30 GB of data is provided. Additional data charges are 10rs/1 GB\n";
	int x;
	cout<<"\nEnter packege number : ";
	cin>>x;
	switch(x){
		
		case 1:{
			int gb,rate=1000;
			cout<<"\nEnter how Gb you use : ";
			cin>>gb;
			if(gb>10){
				gb=gb-10;
				total=gb*50;
			}
			total+=rate;
			cout<<"\n*************";
			cout<<"\nYours Total bill : "<<total;
			cout<<"\n*************";
			
			break;
		}
		case 2:{
				int rate=1500 ,gb;
			cout<<"\nEnter how Gb you use : ";
			cin>>gb;
			if(gb>20){
				gb=gb-20;
				total=gb*30;
			}
			total+=rate;
			cout<<"\n*************";
			cout<<"\nYours Total bill : "<<total;
			cout<<"\n*************";
			
			break;
		}
		case 3:{
				int rate=2000 ,gb;
			cout<<"\nEnter how Gb you use : ";
			cin>>gb;
			if(gb>30){
				gb=gb-30;
				total=gb*10;
			}
			total+=rate;
			cout<<"\n*************";
			cout<<"\nYours Total bill : "<<total;
			cout<<"\n*************";
		
			break;
		}
		default :{
			cout<<"You Enter worng number : ";
			break;
		}			
	}
	

}

