#include<iostream>
#include<cstring>
using namespace std ;


struct marks{
	
	
        float per;
        	char name[30];
        	int rollno[5];
        	int pf[5];
        	int ict[5];
        	int oop[5];
        	
	
};
 


main(){
	
	marks s1;
	
	
	
	for(int i=1;i<6;i++){
	double total=0;	
		 cout << "Enter name: " ;
    cin.get(s1.name,30);
  
    cout << "Enter roll number: ";
    cin >>s1.rollno[i];
    cout << "Enter marks of pf out of 100 : ";
    cin>>s1.pf[i];
    cout << "Enter marks of ict out of 100 : ";
    cin>>s1.ict[i];
    cout << "Enter marks of oop out of 100 : ";
     cin>>s1.oop[i];
     total=s1.pf[i]+s1.ict[i]+s1.oop[i];
		s1.per=(float)total/300*100;
	}
	
	
	
	
}
