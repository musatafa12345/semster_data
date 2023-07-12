#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class matrix{
	
			public:
				int sum[2][3];
				 
				 
 void sum_matrix(matrix a){
				 			
		for(int i=0;i<2;i++)
		   {
							 
							 				
					for(int j=0;j<3;j++)
					{
									
					sum[i][j]=sum[i][j]+a.sum[i][j];
		
					}				 	
			}
	 }
	
};


main(){
	
	matrix a1,a2;
	 //a1.sum={1,2,3,4,5,6};
	a2.sum={9,8,7,6,5,4};
}
