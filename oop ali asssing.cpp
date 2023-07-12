#include<iostream>
#include<cstring>
using namespace std;

class marks_taker{
	
	private:
		int rollno[6];
        string name[6];
			
		struct sut_data{
				int ict;
				int pf;
				int oop;
		};
	public:
	       	double total[6];
	        float par[6];
	        sut_data m1[6];
	
	void gatedata();
	void show_result();
	
};

 void marks_taker :: gatedata(){
 	
 		for(int i=1;i<6;i++){
	
 		 cout << "\nEnter name: " ;
    cin>>name[i];
  	cout << "\nEnter roll number: ";
    cin >>rollno[i];
    
    cout << "\nEnter marks of pf out of 100 : ";
    cin>>m1[i].pf;
    cout << "\nEnter marks of ict out of 100 : ";
    cin>>m1[i].ict;
    cout << "\nEnter marks of oop out of 100 : ";
     cin>>m1[i].oop;
     total[i]=total[i]+(m1[i].pf)+(m1[i].ict)+(m1[i].oop);
		par[i]=(float)total[i]/300*100;
	}
 }

void marks_taker :: show_result(){
	
		for(int j=1;j<6;j++){
		cout<<"\nname of student :"<<name[j];
		cout<<"\nmark of pf is :"<<m1[j].pf;
		cout<<"\nmark of ict is :"<<m1[j].ict;
		cout<<"\nmark of oop is :"<<m1[j].oop;
		cout<<"\npercntge of student :"<<par[j];
		cout<<"\ntotal number of student :"<<total[j];
		
	}
}

main(){
	
	marks_taker s1;
	
	s1.gatedata();
	s1.show_result();
	
	
}
