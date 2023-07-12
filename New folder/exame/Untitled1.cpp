#include<iostream>
using namespace std;
class A{	
		public:
			int data1;
			int data2;
	void setdata();
	int getdata1();
	int getdata2();
};
void A  :: setdata(){
	data1=1;
	data2=2;
}
int A :: getdata1(){
	return  data1;
	
}
int A :: getdata2(){
	return data2;
}
	class B : public A {
	
	private:
		int data3;
		public:
		void setdata3();
		void show();
};

void B :: setdata3()
{
	data3=data1+data2;
}
void B :: show()
{
	cout<<"data1= "<<data1<<endl;
	cout<<"data2= "<<data2<<endl;
	cout<<"data3= "<<data3<<endl;
}

int main()
{
	B o;
	o.setdata();
	o.setdata3();
	o.show();
	return 0;
}
