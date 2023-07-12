#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int pound, shilling, pence;
    float penceF;
    cout<<"Enter Pound: ";
    cin>>pound;
    cout<<"Enter Shilling: ";
    cin>>shilling;
    cout<<"Enter Pence: ";
    cin>>pence;
    //Pounds = Pounds + (Shillings/20) + (Pence/20/12);
    penceF = (float)((shilling*12)+pence)/240;
    pence=penceF*100;
    cout<<penceF<<endl;
    if (pence >= 100){
        pound = pound + (pence/100);
        pence = pence%100;
    }  
    cout<<"Decimal Pounds:\x9c"<<pound<<"."<<pence;
  
    return 0;
}
