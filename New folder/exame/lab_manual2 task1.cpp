#include<iostream>
using namespace std;

class number_finder{
	
	private : 
	int size;
	public:
	int get_size(){
		
		cout<<"Enter how many number : "<<endl;
		cin>>size;
		return size;
	}
	
	int *odd_num(int size){
		int *odd_number=new int[size];
		for(int i=0;i<size;i++){
			if(i%2!=0){
				odd_number[i]=i;
			}
		}
		return odd_number;
	}
	void diplay(int *array,int size){
		
		cout<<"odd number : ";
		for(int i=0;i<size;i++){
			
			cout<<*(array+i)<<", ";
		}
	}
	
};


main()
{
	number_finder obj1;
	int x=obj1.get_size();
	int *y=obj1.odd_num(x);
	obj1.diplay(y,x);
		
}

