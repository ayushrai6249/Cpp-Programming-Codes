#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number: ";
    cin >> n;
    long longx = 1, y = 1, z = 0;
    if (n == 0)
    {
        cout << 0;
    }
    else if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else
    {
        for (long longi = 3; i <= n; i++)
        {
            z = x + y;
            y = x;
            x = z;
        }
        cout << z;
    }

    return 0;
}