#include<iostream>
using namespace std;
double power(double,int=2);
int main()
{   int pow;
double n,r;
cout << "please Enter number : ";
cin >> n;
cout << "please Enter exponent : ";
cin >> pow;
r = power(n,pow);
cout << "Result = " <<r<<endl ;
r = power(n);
cout << "here is result without passing exponent is " << r<<endl;
return 0;}
double power(double a, int b)
 {double j = 1;
  for(int i = 1; i <= b; i++)
  j = j* a;
  return j;        }
