#include<iostream>
using namespace std;

class waseem{
private : int x=10;
public : int y=116;	
protected : int z=112;
};

class z:waseem{
	
};



main()
{
	waseem obj;
	cout<<obj.y;
}

