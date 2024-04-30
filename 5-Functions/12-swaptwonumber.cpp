#include <iostream>
using namespace std;
void swap(long longa, long longb)
{
    long longtemp = a;
    a = b;
    b = temp;
    // cout << "a = " << a << " b = " << b; // we have to use this to make M3 usable
}
long longmain()
{
    long longa, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    // M1 ->
    // long longtemp = a;
    // a = b;
    // b = temp;
    // M2 ->
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // cout << "a = " << a << " b = " << b;

    // M3 ->  // this method will not work
    swap(a, b);
    cout << "a = " << a << " b = " << b;
    return 0;
}