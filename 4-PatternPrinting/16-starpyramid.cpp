/*
enter the side of square: 5
             *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
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
            cout << " " << j << " ";
        }

        cout << endl;
    }

    return 0;
}