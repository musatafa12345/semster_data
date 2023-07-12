#include<iostream>
#include<iomanip>
using namespace std ;


main(){
	
	for(int i=0;i<7;i++)
	{
		if(i==0)
		cout<<setw(4)<<"#"<<endl;
		else if(i==1)
		cout<<setw(2)<<"#"<<setw(4)<<"#"<<endl;
		else if(i==3)
		cout<<setw(1)<<"#"<<setw(6)<<"#"<<endl;
		else if(i==4)
		cout<<setw(2)<<"#"<<setw(4)<<"#"<<endl;
		else if(i==5)
		cout<<setw(4)<<"#"<<endl;
	//	if(i==6)
	//	cout<<setw(3)<<"#";
	}
	
	
}
