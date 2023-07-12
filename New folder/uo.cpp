#include<iostream>
using namespace std;

int main()
{

    int a,i=1;
    cout <<"enter the number"<<endl;
    cin>>a;
    if(a>=1 &&a<=50)
    {

        for(int i=1; i<=4; i++)
        {
            cout<<"chal ja pen yaka Kam kar ja k "<<endl;
        }
    }
    else if(a>50 && a<=100)
    {

        while(i<=4)
        {
            cout<<"chal nikal"<<endl;
            i++;
        }
    }
    else if(a>100 && a<150)
    {

    do
    {
    	i++;
        cout<<"bsss kar "<<endl;

    }
    while(i<=5);
            

    }

    return 0;
}
