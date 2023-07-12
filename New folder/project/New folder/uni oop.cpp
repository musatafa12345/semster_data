# include <iostream>
#include <cstring>
using namespace std;

class universty {
	public:
		string name;
		string location;
	void	uni(string n, string lo)
		{
			name=n;
			location=lo;
		
		}
	void batch(string b)
		{
			string x[3]={"fa20-bcs-a","fa20-bcs-b","fa20-bcs-c"};
		/*	for(int i=0;i>3;i++)
			{
				if(b==x[i])
				{
					
				}
			}*/
		}
		void display()
		{
			cout<<name<<" "<<location;
		}
		
 };
class student : public universty {
	public:
		
	student()
	{
		string b,n;
		int r;
		string x[3]={"fa20-bcs-a","fa20-bcs-b","fa20-bcs-c"};
		cout<<"Enter your batch = ";
		cin>>b;
		for(int i=0;i>3;i++)
	 {
		if(b==x[i])
		{
		
		}
	  }
			
		cout<<"Enter name  = ";
		cin>>n;
		cout<<"Enter roll no = ";
		cin>>r;	
	}
		
	
};


main(void)
{
	string n;
	string l,x;
	cout<<"Enter the universty name = ";
	cin>>n;
	cout<<"Enter the campus name = ";
	cin>>l;
	cout<<"Enter the batch = ";
	cin>>x;
	universty s;
	s.uni(n,l);
	s.display();
	
}
