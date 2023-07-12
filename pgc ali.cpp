#include<iostream>
#include<cstring>
using namespace std ;


struct marks{
	
   char name[30];
   int pf;
        	int ict;
        	int oop;
	
};
 


 main(){
	
	marks s1[6];
	int rollno[6];
	double total[6];
	float par[6];
	
	for(int i=1;i<6;i++){
	
 		 cout << "Enter name: " ;
    cin>>s1[i].name;
  	cout << "Enter roll number: ";
    cin >>rollno[i];
    
    cout << "Enter marks of pf out of 100 : ";
    cin>>s1[i].pf;
    cout << "Enter marks of ict out of 100 : ";
    cin>>s1[i].ict;
    cout << "Enter marks of oop out of 100 : ";
     cin>>s1[i].oop;
     total[i]=total[i]+(s1[i].pf)+(s1[i].ict)+(s1[i].oop);
		par[i]=(float)total[i]/300*100;
	}
	
	for(int j=1;j<6;j++){
		cout<<"name of student :"<<s1[j].name;
		cout<<"\nmark of pf is :"<<s1[j].pf;
		cout<<"\nmark of ict is :"<<s1[j].ict;
		cout<<"\nmark of oop is :"<<s1[j].oop;
		cout<<"\npercntge of student :"<<par[j];
		cout<<"\ntotal number of student:"<<total[j];
		
	}
	
	
}
