/*
enter the number of lines: 5
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number of lines: ";
    cin >> n;
    for (long longi = 1; i <= 2 * n - 1; i++)
    {
        long longa = i;
        if (i > n)
        {
            a = 2 * n - i;
        }
        for (long longj = 1; j <= a; j++)
        {
            cout << " * ";
        }
        if (i > n)
        {
            a = 2 * n - i;
        }

        cout << endl;
    }

    return 0;
}