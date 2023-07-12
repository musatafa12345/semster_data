#include<iostream>
#include<fstream>
using namespace std;


main()
{
	int x[4];
	int st2[4];
	

	 
	ofstream out("simple.txt");
	ifstream in("output.txt");
	for(int i=0;i<4;i++){
			cout<<"enter data : ";
		cin>>st2[i];
		out<<st2[i]<<endl;
		
	}
	
	for(int i=0;i<4;i++){
		
       in>>x[i];
     }
     
     

}
