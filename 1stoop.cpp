# include <iostream>
using namespace std;

class Myclass{
	public:
		int num;
		string mystring;
	
};

int main()
{
	Myclass myobj;
	
	myobj.num=12;
	myobj.mystring="my frist class";
	cout<<myobj.num<<"\n";
	cout<<myobj.mystring;
	return 0;
}
