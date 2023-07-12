#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
	string first1,first2,address1,address2,district1,district2;
	string last1,last2;
	last1="khan";last2="my jan";
	first1="mustafa";first2="fakhar ali ";
	address1="akhtar abad 111";address2="Lahore 1112";
	district1="okara";district2="Lahore";
	
	cout<<setiosflags(ios::left)<<setw(13)<<"frist name"<<setw(20)<<"Last name"<<setw(20)<<"address"<<setw(20)<<"district"<<endl;
	
	cout<<"\n\n\n";
	cout<<setiosflags(ios::left)<<setw(13)<<first1<<setw(20)<<last1<<setw(20)<<address1<<setw(20)<<district1<<endl;
    cout<<"\n\n\n";	
    cout<<setiosflags(ios::left)<<setw(13)<<first2<<setw(20)<<last2<<setw(20)<<address2<<setw(20)<<district2<<endl;
    
    
}
