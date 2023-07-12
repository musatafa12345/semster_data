#include <iostream>
using namespace std;
double area(double); 
double circum(double);
double const PI=3.1416;
int main()
{
   double r;
   cout<<"Give radius of circle :" ;
   cin>>r;
   cout<<"Area of circle = "<<area(r)<<endl;
   cout<<"Circumference of circle = "<<circum(r)<<endl;
   return 0;
}

double area(double rad)
{
  return PI*rad*rad;
}

double circum(double rad)
{
  return 2*PI*rad;
}


