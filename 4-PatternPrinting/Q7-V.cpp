/*
enter the number of lines: 5
 *                       *
    *                 *
       *           *
          *     *
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
        for (long longj = 1; j <= 2 * n - 1; j++)
        {
            if ((i == j) || (i + j == 2 * n))
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