#include<iostream>
#include<cstring>
using namespace std;
class binary
{
		private:
		int s[10];
	public:
	void read(){
		for(int i=0;i<10;i++){
		cout<<"Enter a binary number"<<endl;
		cin>>s[i];
		}
	
}

	void chk_bin(){
	for(int i=0;i<10;i++){
		if(s[i]!=0 && s[i]!=1){
			cout<<"Entered number is Not Binary Number"<<endl;
		break;
		}
}
}
	void ones_compliment(){
		for(int i=0;i<10;i++){
			if(s[i]==0){
				s[i]==1;
			}
			else{
				s[i]==1;
			}
		}
}
	
	void disply(){
		for(int i=0;i<10;i++){
			cout<< "binary digits are : "<<s[i]<<endl;
		}
	}

};



 main(){
	 binary b;
	 b.read();
	 b.chk_bin();
	 b.disply();
	 b.ones_compliment();
	 b.disply();

}
