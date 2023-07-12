#include <iostream>
#include <string>
#include <conio.h>
#include <sstream>

using namespace std;
int main(){
int guess,pass1,pass2,pass3,pass4,pass5,guess1,guess2,guess3,guess4,guess5;
string x="";
char ch;
cout << "Please enter 5 numbered password: "<<endl;
ch = _getch();
while(ch != 13){//character 13 is enter
x.push_back(ch);
cout << '*';
ch = _getch();
}
stringstream geek(x);
int pass = 0;
geek >> pass;

for (int counter = 4; counter >=0; counter=counter - 1)
{
cout<<"\nPlease guess the password: ";
cin>>guess;
guess5=guess%10;
guess4=(guess%100)/10;
guess3=(guess%1000)/100;
guess2=(guess%10000)/1000;
guess1=(guess%100000)/10000;

pass5=pass%10;
pass4=(pass%100)/10;
pass3=(pass%1000)/100;
pass2=(pass%10000)/1000;
pass1=(pass%100000)/10000;

if (pass1 == guess1 && pass2 == guess2 && pass3 == guess3 && pass4 == guess4 && pass5 == guess5)
{
cout << "\nCongratulations. You have break the code.\n";
return (0);
}
else if (pass1 == guess1 && pass2 == guess2){
cout<< "\nWrong Password. You have "<<counter<<" tries left. Your match is: "<<guess1<<guess2<<"***";
}
else {
cout<< "\nWrong Password. You have "<<counter<<" tries left.";
}
}
}
