/*
enter the side of square: 5
             *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the side of square: ";
    cin >> n;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= 2 * i - 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (long longi = 1; i <= n - 1; i++)
    {
        for (long longj = 1; j <= i; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= 2*n - 2 * i - 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}