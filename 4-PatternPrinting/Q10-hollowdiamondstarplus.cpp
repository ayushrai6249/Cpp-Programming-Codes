/*
enter number of lines: 5
             *
          *  *  *
       *     *     *
    *        *        *
 *  *  *  *  *  *  *  *  *
    *        *        *
       *     *     *
          *  *  *
             *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter number of lines: ";
    cin >> n;
    for (long longi = 1; i <= 2 * n - 1; i++)
    {
        for (long longj = 1; j <= 2 * n - 1; j++)
        {
            long longa = i, b = j;
            if (i > n)
            {
                a = 2 * n - i;
            }
            if (j > n)
            {
                b = 2 * n - j;
            }

            if ((a + b == n + 1) || i == n || j == n)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}