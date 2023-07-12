#include<iostream>
using namespace std;


main()
{
	float num_1,num_2;
	char op;
	cout<<"\n\t\tEnter the number :\t";
	cin>>num_1;
	cout<<"\n\t\tEnter the opater :\t";
	cin>>op;
	cout<<"\n\t\tEnter 2nd number :\t";
	cin>>num_2;
	
	switch(op){
		case '+' :{
			cout<<"\n\t\t"<<num_1<<" "<<op<<" "<<num_2<<" = "<<num_1+num_2;
			break;
		}
		case '-' :{
			cout<<"\n\t\t"<<num_1<<" "<<op<<" "<<num_2<<" = "<<num_1-num_2;
			break;
		}
		case '*' :{
			cout<<"\n\t\t"<<num_1<<" "<<op<<" "<<num_2<<" = "<<num_1*num_2;
			break;
		}
		case '/' :{
			if(num_2>0)
			{
				cout<<"\n\t\t"<<num_1<<" "<<op<<" "<<num_2<<" = "<<num_1/num_2;
		    }
		    else
			{
				cout<<"\n\t\tError ";
				cout<<"\n\t\tdivisor equal to zero";
			}
		break;
		}
		default : {
			cout<<"\n\t\tyou enter worng oprater ";
			break;
		}
		
	}
			
}

