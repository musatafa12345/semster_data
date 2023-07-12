// C++ code to swap the element of first
// and last column and display the result
#include <iostream>
using namespace std;
 
#define n 3
 
void interchangeFirstLast(int m[][n])
{
    // swapping of element between first
    // and last columns
    for (int i = 0; i < n; i++) {
        int t = m[i][0];
        m[i][0] = m[i][n - 1];
        m[i][n - 1] = t;
    }
}
 
// Driver function
int main()
{
    // input in the array
    int m[n][n] = { { 1, 2, 3},
                    { 4, 5, 6},
                    { 7, 8, 9},};
 
    interchangeFirstLast(m);
 
    // printing the interchanged matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
