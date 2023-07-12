#include<iostream>
using namespace std;


main()
{
	
	const int row=3,col=3;
	int a[row][col];
	cout<<"\n\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
		cin>>a[i][j];
	}
	cout<<"\n\n::::Array elements ::::\n\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
	}cout<<endl;

	
	cout<<"\n\n::::After sawp the array ::::\n\n";
	for (int i = 0; i < row; i++) {
        int t = a[i][0];
        a[i][0] = a[i][row - 1];
        a[i][row - 1] = t;
    }
	
	 for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

