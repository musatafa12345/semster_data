#include<iostream>
#include<cstring>
using namespace std;
class binary
{
	private:
		int s;
	public:
	void read();
	void chk_bin();
	void ones_compliment();
	void display();	
};
void binary:: read() {
	cout<<"Enter a binary number"<<endl;
	cin>>s;
}
void binary::chk_bin(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!=0&& s.at(i)!=1){
			cout<<"Entered number is Not Binary Number"<<endl;
		break;
		}
	}
	void binary::ones_compliment(){
		for(int i=0;i<s.length();i++){
			if(s.at(i)=='0'){
				s.at(i)=='1';
			}
			else{	
				s.at(i)=='1';
			}
		}
	}
	void binary::display(){
		for(int i=0;i<s.length();i++){
			cout<<s.at(i);
		}
	}
}
int main(){
	 binary b;
	 b.read();
	 b.display();
	 b.chk_bin();
	 b.ones_compliment();
	 b.display();
	return 0;
}
