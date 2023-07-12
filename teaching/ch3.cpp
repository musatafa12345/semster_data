#include<iostream>
using namespace std;


main()
{
int marks;
cout<<"\n Enter your marks:";
cin>>marks;
if(marks>=80&&marks<=100){

cout<<"\n congratulation you got A grade :"<<marks;	
}



else if(marks>=60&&marks<80){
cout<<"\n You got B grade :"<<marks;

}
else if(marks>=50&&marks<=60){

cout<<"\n You got C grade :"<<marks;
}
else if(marks>=45&&marks<=50){
	cout<<"\n You got D grade :"<<marks;
}
else if(marks>=25&&marks<=45){
	cout<<"\n You got E grade :"<<marks;
}
else if(marks<25&&marks >0){
	cout<<"\n Oops You are fail:"<<marks;
}
default{
	cout<<"\n you enter wrong numbers :"<<marks;
}
}
