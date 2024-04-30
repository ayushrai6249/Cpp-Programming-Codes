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
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i; j++)
        {
            cout << "   ";
        }

        for (long longj = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (long longi = 1; i <= n - 1; i++)
    {
        for (long longj = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}