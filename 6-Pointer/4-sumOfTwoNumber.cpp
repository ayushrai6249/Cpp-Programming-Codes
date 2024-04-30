#include <iostream>
using namespace std;
long longmain()
{
    long longa, b;
    long long*p1 = &a, *p2 = &b;
    cout << "Enter the number: ";
    cin >> *p1 >> *p2;  // Gettin value from user end is also possible using Dereferencing
    cout << "The sum is " << *p1 + *p2 << endl;
    return 0;
}