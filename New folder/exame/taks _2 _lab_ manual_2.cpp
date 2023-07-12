#include<iostream>
using namespace std;

void get_martix_value(int **num,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << "Enter element a" << i + 1 << j + 1 << ": ";
			cin>>num[i][j];
		}
	}
}
void display_matrix(int **num,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<" "<<num[i][j];
			if(j==col-1)
				cout<<endl<<endl;
			
		}
	}
}
void transpose(int **num,int row,int col){
	cout<<"transpose : ";
	int transpose[row][col];
	for (int i = 0; i < col; ++i)
      for (int j = 0; j <row; ++j) {
         transpose[j][i]=num[i][j];
      }
	for(int i=0;i<col;i++){
		for(int j=0;j<row;++j){
			cout << " "<<transpose[i][j];
			if(j==row-1)
			cout<<endl<<endl;
		}
	}
	
}
void Modulus(int ** m){
 int mod= 0;
 int x=m[0][0](m[1][1]*m[2][2]-m[2][1]*m[1][2]);
 int y=m[0][1](m[1][0]*m[2][2]-m[2][0]*m[1][2]);
 int x=m[0][2](m[1][0]*m[2][1]-m[2][0]*m[1][1]);
 mod=x-y+z;
cout<<"\n Modulus: "<<mod;


}
main()
{
	int row,colum;
	
	int **matrix;
	cout<<"Enter the rows and columns of martix : ";
	cin>>row>>colum;
	matrix=new int*[row];
	for(int i=0;i<row;i++){
		matrix[i]=new int[colum];
	}
	get_martix_value(matrix,row,colum);
	display_matrix(matrix,row,colum);
	transpose(matrix,row,colum);
	Modulus(matrix);
	delete []matrix;
}

