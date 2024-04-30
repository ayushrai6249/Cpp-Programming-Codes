/*
enter number of lines: 5
 *           *
    *     *
       *
    *     *
 *           *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter number of lines: ";
    cin >> n;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n; j++)
        {
            if (i == j || (i + j) == (n + 1))
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