#include<iostream>
using namespace std;


struct car
{
    char model[30],company[30],type[30];
    float cost;
}c[30];
int main()
{
    int n,i,num,ind;
    cout<<"\nEnter the number of entries : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter details for car number :"<<i+1;
        cout<<"\nEnter company : ";
        cin>>c[i].company;
        cout<<"Enter model : ";
        cin>>c[i].model;
        cout<<"Enter type : ";
        cin>>c[i].type;
        cout<<"\nEnter cost : ";
        cin>>c[i].cost;
    }
    cout<<"\n1. Display the details of a car\n";
    cout<<"\n2. Modify the details of car\n";
    cin>>num;
    switch(num)
    {
        case 1:
                cout<<"\nEnter the index : ";
                cin>>ind;
                cout<<"\nDetails for car number :"<<ind;
                cout<<"\nCompany : "<<c[ind-1].company;
                cout<<"\nModel : "<<c[ind-1].model;
                cout<<"\nType : "<<c[ind-1].type;
                cout<<"\nEnter cost : "<<c[ind-1].cost;
                break;
        case 2:
                cout<<"\nEnter the index : ";
                cin>>ind;
                cout<<"\nEnter company : ";
                cout<<c[ind].company;
                cout<<"\nEnter model : ";
                cin>>c[ind].model;
                cout<<"\nEnter type : ";
                cin>>c[ind].type;
                cout<<"Enter cost : ";
                cin>>c[ind].cost;
                break;
        default: printf("Invalid Input !!!");
    }
}

