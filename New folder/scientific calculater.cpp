#include <iostream>
#include <math.h>
using namespace std;

class Calculator {
    double A, B,n;
public:
    void derivative() {
        float x[20], y[20][20], xp, h, sum=0.0, first_derivative, term;
 int i,j, n, index, flag = 0;

 cout<<"Enter number of data: ";
 cin>>n;
 cout<<"Enter data:\n";
 for(i = 0; i < n ; i++)
 {
  cout<<"x = "<< i;
  cin>>x[i];
  cout<<"y = "<< i;
  cin>>y[i][0];
 }

 cout<<"Enter at what value of x you want to calculate derivative: ";
 cin>>xp;


 for(i=0;i< n;i++)
 {
     if (fabs(xp - x[i])< 0.0001)
     {
        
        index = i;
        flag = 1;
        break;
     }
 }
 if (flag==0)
 {
     cout<<"Invalid calculation point. Program exiting...";
     exit(0);
 }

    }
    int factorial(){
    	
    	int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout<<"Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
    	
    
	}
    void combination(){
    	
    int n, r, comb;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r));
   cout << "\nCombination : " << comb;
}
void geometricMean(){
	double x1=2,x2=4,x3=6,x4=7,x5=6;
    double x,N=5;
    x=(x1*x2*x3*x4*x5);
    x=pow(x,(1/N));
    cout<<"Geometric Mean for Xn: "<<x;
}
};
int main() {
   Calculator s;
   s.derivative(); 
   s.factorial();
   s.combination();
   s.geometricMean();     
    return 0;
}
