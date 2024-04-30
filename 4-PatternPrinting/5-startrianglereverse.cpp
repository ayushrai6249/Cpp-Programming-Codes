/*
 *  *  *  *  *
 *  *  *  *  // for n = 5
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
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}