#include<iostream>
using namespace std;

class finding_number{
	private:
		
		int max,min,size;
	
	public:
		int get_size(){
			cout<<"\t\tHow many number you whant to enter : "<<endl;
			cout<<"\t\t";cin>>size;
			return size;
		}
		int * get_number(int size){
			int s=size;
			int *number=new int[s];
			cout<<"\t\tEnter number : "<<endl;
			for(int i=0;i<s;i++){
				cout<<"\t\t";cin>>number[i];
			}
			return number;
		}
	public:
	int max_number(int array[],int size){
		max=array[0];
		for(int i=1;i<size;i++){
			
			if(array[i]>max){
				max=array[i];
			}
		}
		return max;
	}
	public:
	int less_number(int array[],int size){
		min=array[0];
		for(int i=0;i<size;i++){
			
			if(max<array[i]){
				min=array[i];
			}
		}
		return min;
	}
};



main()
{
	
	finding_number obj1;
	int s,*n,m,l;
	cout<<endl<<endl;
	cout<<"\t\t";cout<<"    ****************************************"<<endl;
	cout<<"\t\t";cout<<"    *  ********************************* * *"<<endl;
	cout<<"\t\t";cout<<"    *  * \t";cout<<"Mustafa khan";cout<<"\t\t * *"<<endl;
	cout<<"\t\t";cout<<"    *  * \t";cout<<"FA20-BCS-118";cout<<"\t\t * *"<<endl;
	cout<<"\t\t";cout<<"    *  ********************************* * *"<<endl;
	cout<<"\t\t";cout<<"    ****************************************"<<endl;
	
	
	
	cout<<endl<<endl<<endl;
	
	cout<<"\t\t************************************\n";
	s=obj1.get_size();
	cout<<"\t\t************************************\n";
	n=obj1.get_number(s);
	cout<<"\t\t************************************\n";
	for(int i=0;i<s;i++){
		cout<<"\t\t";cout<<*(n+i)<<endl;
	}
	cout<<"\t\t************************************\n";
	m=obj1.max_number(n,s);
	l=obj1.less_number(n,s);
	cout<<"\n\n\t\t*************************************\n";
	cout<<"\t\tlargest number are : "<<m<<endl;
	cout<<"\t\tsamllest number are : "<<l<<endl;
	cout<<"\t\t*************************************";
}

