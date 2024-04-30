/*
enter the number of lines: 4
 *                 *
 *  *           *  *
 *  *  *     *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *     *  *  *
 *  *           *  *
 *                 *
 HAR HAR MAHADEV
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn, m;
    cout << "enter the number of lines: ";
    cin >> m;
    n = m - 1;
    long longa = 2 * n - 1;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (long longj = a; j >= 1; j--)
        {
            cout << "   ";
        }
        a -= 2;
        for (long longj = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (long longi = 1; i <= 2 * m - 1; i++)
    {
        cout << " * ";
    }
    cout << endl;
    for (long longi = 1; i <= 2 * m - 1; i++)
    {
        cout << " * ";
    }
    cout << endl;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        for (long longj = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << " HAR HAR MAHADEV";

    return 0;
}