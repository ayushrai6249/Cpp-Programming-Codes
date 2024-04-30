/*
enter the number of lines: 5
 1
 0  1
 1  0  1
 0  1  0  1
 1  0  1  0  1
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number of lines: ";
    cin >> n;
    long longa = 1;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= i; j++)
        {
            if (((i % 2 == 0) && (j % 2 == 0)) || (i % 2 != 0) && (j % 2 != 0))
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }

    return 0;
}