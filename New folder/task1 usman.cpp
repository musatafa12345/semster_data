#include<iostream>
using namespace std;




struct car{
	
	
	char make[20];
	
	char model[20];

	int capacity;
	
	float weight;
};


int main( void){
	int i;
	
	struct car car1;
	struct car car2;
	struct car car3;
	
	cout<<"Enter the make of the car 1: ";
	gets(car1.make);
	cout<<"Enter the model of the car 1: ";
	cin>>car1.model;
	cout<<"Enter the capacity of the car 1: ";
	cin>>car1.capacity;
	cout<<"Enter the weight of the car 1: ";
	cin>>car1.weight;


	fflush(stdin);
	cout<<"\nEnter the make of the car 2: ";
	gets(car2.make);
	cout<<"Enter the model of the car 2: ";
	gets(car2.model);
	cout<<"Enter the capacity of the car 2: ";
	cin>>car2.capacity;
	cout<<"Enter the weight of the car 2: ";
	cin>>car2.weight;
	

	fflush(stdin);
	cout<<"\nEnter the make of the car 3: ";
	gets(car3.make);
	cout<<"Enter the model of the car 3: ";
	gets(car3.model);
	cout<<"Enter the capacity of the car 3: ";
	cin>>car3.capacity;
	cout<<"Enter the weight of the car 3: ";
	cin>>car3.weight;


	
	
	cout<<"Car make"<<" Car model"<<" Car make"<<"  Car capacity"<<"Car weight"<<endl;
	cout<<car1.make<<" "<<car1.model<<" "<<car1.capacity<<" "<<car1.weight<<endl;
	cout<<car2.make<<" "<<car2.model<<" "<<car2.capacity<<" "<<car2.weight<<endl;
	cout<<car3.make<<" "<<car3.model<<" "<<car3.capacity<<" "<<car3.weight<<endl;


	

	return 0;
}
