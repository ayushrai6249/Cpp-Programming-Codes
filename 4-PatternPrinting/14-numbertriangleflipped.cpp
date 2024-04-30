/*
enter the number of lines: 5
             1
          1  2
       1  2  3
    1  2  3  4
 1  2  3  4  5
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number of lines: ";
    cin >> n;
    // for (long longi = 1; i <= n; i++)
    // {
    //     for (long longj = 1; j <= n; j++)
    //     {
    //         if ((i + j) >= (n + 1))
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }

    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    return 0;
}