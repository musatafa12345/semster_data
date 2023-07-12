#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream read;
  double sum_cgpa,sum=0;
  string x;
  read.open("usman.dat");
    
  read>>sum_cgpa;
  read>>x;
  sum+=sum_cgpa;
  cout<<sum_cgpa;
  cout<<x;
}

