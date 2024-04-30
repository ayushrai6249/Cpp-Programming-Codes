#include <iostream>
using namespace std;
long longmain()
{
    long longa, b, c;
    cout << "enter length of first, second and third side of triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "they can form a triangle";
    }
    else
    {
        cout << "they cannot form a triangle";
    }

    return 0;
}