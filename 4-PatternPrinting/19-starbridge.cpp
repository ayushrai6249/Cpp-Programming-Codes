/*
enter the number of lines: 5
 *  *  *  *  *  *  *  *  *
 *  *  *  *     *  *  *  *
 *  *  *           *  *  *
 *  *                 *  *
 *                       *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn, m;
    cout << "enter the number of lines: ";
    cin >> m;
    n = m - 1;
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

    return 0;
}