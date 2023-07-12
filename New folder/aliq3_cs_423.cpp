#include <iostream>
using namespace std ;

template <typename T, size_t size> void print(const T (&array)[size])
{
    for(size_t i = 0; i < size; ++i)
        cout << array[i] << " ";
}

int main() {
    int arr[] = { 1,2,3,4,99};
    
    print(arr);
}
