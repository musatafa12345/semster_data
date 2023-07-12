#include<iostream>
using namespace std;

class matrix_2d{
	
	private : int matri[3][3];
	private : double det=0;
	public : void get_matrix(){
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++){
				cout<<"\n\t\tEnter the number of matrix : ";
				cin>>matri[i][j];
			}
			
	    }
	}
	
	public : void display(){
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++){
				
					cout<<"\t\t"<<matri[i][j];
			}cout<<endl<<endl;
		
	    }
    }
 
     void display_matrix(){
		double x,y,z;
		x=matri[0][0]*(matri[2][2]*matri[1][1]-matri[1][2]*matri[2][1]);
		y=matri[0][1]*(matri[2][2]*matri[1][0]-matri[1][2]*matri[2][0]);
		z=matri[0][2]*(matri[2][1]*matri[1][0]-matri[1][1]*matri[2][0]);
		det=x-y+z;
	
		cout<<"\n\t\tdeterminant : "<<det;
	}    
	    
	
	
	
};


main()
{
	matrix_2d d1=matrix_2d();
	
	d1.get_matrix();
	d1.display();
	d1.display_matrix();
	
	
	
	
}

