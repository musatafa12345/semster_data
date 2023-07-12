#include<iostream>
using namespace std;


int hms_sec(int h,int m, int s)
{
   int seconds =0;
   cout<<"\n\n";
   cout << "\t\tEnter the hour = ";
   cin >> h;
   cout << "\t\tEnter the mints = ";
   cin >> m;
   cout << "\t\tEnter the second = ";
   cin >> s;
   seconds = (h*60*60)+(m*60)+s;
   return seconds;
}


main()
{
    int h,m,s;
    int result =hms_sec(h,m,s);
    cout<<"\n\n";
    cout << "\t\tThe result in second = " << result<<endl<<endl;
    
    system("pause");
    
    return 0;
}


