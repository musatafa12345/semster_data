#include<iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#include<math.h>
#define f(x) 1/(1+pow(x,2))
using namespace std;


class scientific_calculator{
   
   private :
   double step ;  
   double area ;
  
  public :
  
void Integral(){
    float lower, upper, integration=0.0, stepSize, k;
    int i, subInterval;

 
 	cout<<"Enter lower limit of integration: ";
 	cin>>lower;
 	cout<<"Enter upper limit of integration: ";
 	cin>>upper;
 	cout<<"Enter number of sub intervals: ";
 	cin>>subInterval;

 
 	stepSize = (upper - lower)/subInterval;

 
	integration = f(lower) + f(upper);

	for(i=1; i<= subInterval-1; i++){
  	k = lower + i*stepSize;
  	integration = integration + 2 * (f(k));
 }

 	integration = integration * stepSize/2;

 	cout<< endl<<"\nRequired value of integration is: "<< integration;
}
  	
  

void permutations(){
	
	int myints[] = {1,2,3};  
    sort (myints,myints+3);  
    cout << "\n\nThe 3! possible permutations with 3 elements:\n";  
  do {  
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
  } while ( next_permutation(myints,myints+3) );  
  
  cout << "\nAfter loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
  
}

void Fibonacci_Series(){
	
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	cout << "\nEnter the number of terms: ";
    cin >> n;

    cout << "\nFibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
}
}

float harmonic_mean(float arr[], int size){
   float sum = 0;
   for (int i = 0; i < size; i++)
      sum = sum + (float)1 / arr[i];
   return (float)size/sum;
}


};




main()
{
	scientific_calculator s1;
	
	s1.Integral();
	s1.permutations();	
	s1.Fibonacci_Series();
	float arr[] = {2.0, 3.4, 5.3, 2.1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"\n\nHarmonic mean is : "<<s1.harmonic_mean(arr, size);
}

