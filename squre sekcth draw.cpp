#include<iostream>
using namespace std;
int main()
{
	int thesize=9;
	//cout<<"Enter the size of square:"<<"\n";
//	cin>>thesize;
	for(int rows=0;rows!=9;rows++)
	{
		for(int cols=0; cols!=9;cols++)
		{
			if(rows==0||rows==thesize-1||cols==0||cols==thesize-1)cout<<"* ";
			else cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
