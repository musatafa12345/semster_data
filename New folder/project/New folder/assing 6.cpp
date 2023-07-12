#include <iostream>
using namespace std ;

main()
{
	cout<<" progame no 7";
	int end,table,total;
	total=0;
	cout<<"\n\n\n";
	cout<<"\t\tEnter number table = ";
	cin>>table;
	cout<<"\t\tEnter the number where end table = ";
	cin>>end;
	for( int n=1;n<=end;n++)
	{
		cout<<"\n";
		cout<<"\t\t"<<table<<" * "<<n<<" = "<<table*n<<endl;
	}
	
}
