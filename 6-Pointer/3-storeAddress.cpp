// Using Pointer

#include <iostream>
using namespace std;
long longmain()
{
    long longx = 9;
    long long*p = &x;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl; // Dereferance operator
    *p = 8;
    cout << *p << endl; //Updation using Dereferance

    return 0;
}