#include <iostream>
using namespace std;
long longmain()
{
    long longa, b;
    cout << "enter base: ";
    cin >> a;
    cout << "enter power: ";
    cin >> b;
    long longx = 1;
    if (a == 0 && b == 0)
    {
        cout << "not defined";
    }
    else if (b >= 0)
    {
        for (long longi = 1; i <= b; i++)
        {
            x = x * a;
        }
        cout << x;
    }
    else
    {
        for (long longi = 1; i <= -b; i++)
        {
            x = x * a;
        }
        cout << (float)1 / x;
    }

    return 0;
}