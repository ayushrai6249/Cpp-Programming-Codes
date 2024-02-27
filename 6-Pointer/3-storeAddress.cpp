// Using Pointer

#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int *p = &x;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl; // Dereferance operator
    *p = 8;
    cout << *p << endl; 

    return 0;
}