#include <iostream>
#include <iomanip>                     
using namespace std;


int main()
{
    unsigned long num;                    
    cout << "\n\n\t\tEnter the number =  ";
    cin >> num;  
	cout<<"\n";                         
    for (int i = 1; i <= 200; i++)           
    {
        cout<<"\t";  cout<< setw(5) << i*num << "  ";  
              if (i % 10 == 0)                  
                     cout << endl;                 
    }
    
    system("pause");
    return 0;
}
