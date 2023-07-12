#include<iostream>
using namespace std;
int main()
{
	back:
	cout<<"Enter your id number"<<endl;
	double id;
	cin>>id;
      	if(id==110||id==111||id==112||id==113||id==114)
	   {
     	cout<<"you are empolye of compny"<<"\n"; 
    	cout<<"Enter you are full  name"<<"\n";
    	string name;
    	cin>>name;
    	
		}
        else{
		
           cout<<"you are not empolye of compny";
       }
    goto back;
	return 0;
	system("pause");
	
}
