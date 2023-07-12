#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void input(int a){
	
	ofstream out("input.txt");

	for(int i=1;i<a[i];i++){
		out<<a[i];
	}
}

main()
{
	int array[10];
		for(int i=0;i<10;i++){
		cin>>array[i];
	}
	
	input(array);

}

