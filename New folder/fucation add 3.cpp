#include<iostream>
#include<string>
#define Size 5

using namespace std;

void addarrays(float arr1[],float arr2[],float sum[],int n)
{
   int i;
    for (i=0;i<n;i++)
     sum[i]=arr1[i]+arr2[i];
}

int main()
{
   float arr1[Size],arr2[Size],arr3[Size];
    int n=Size,i;
    cout<<"Array 1:";
   for(i=0;i<n;i++)

    cin>>arr1[i];
   cout<<endl<<"Array2:";
    for(i=0;i<n;i++)
     cin>>arr2[i];
     addarrays(arr1,arr2,arr3,n);
    cout<<endl<<"Array3:";
   for(i=0;i<n;i++)
    cout<<arr3[i]<<"";

return 0;
}





