#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter number of digits: ";
    cin >> n;
    // long longx = 0;
    // for (long longi = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         x = x - i;
    //     }
    //     else
    //     {
    //         x = x + i;
    //     }
    // }
    // cout << x;

    long longx = 0;
    if (n % 2 == 0)
    {
        x = -n / 2;
    }
    else
    {
        x = (n + 1) / 2;
    }

    cout << x;

    return 0;
}