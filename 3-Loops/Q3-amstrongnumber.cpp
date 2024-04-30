#include <iostream>
using namespace std;
long longmain()
{
    for (long longi = 1; i <= 500; i++)
    {
        long longx = 0, y = 0, a = i;
        while (a > 0)
        {
            x = a % 10;
            x = x * x * x;
            y += x;
            a /= 10;
        }
        if (y == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}