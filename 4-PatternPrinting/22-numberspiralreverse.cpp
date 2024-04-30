/*
enter the number of lines: 4
 4  4  4  4  4  4  4
 4  3  3  3  3  3  4
 4  3  2  2  2  3  4
 4  3  2  1  2  3  4
 4  3  2  2  2  3  4
 4  3  3  3  3  3  4
 4  4  4  4  4  4  4
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number of lines: ";
    cin >> n;
    for (long longi = 1; i <= 2 * n - 1; i++)
    {
        for (long longj = 1; j <= 2 * n - 1; j++)
        {
            long longa = i, b = j;
            if (a > n)
            {
                a = 2 * n - i;
            }
            if (b > n)
            {
                b = 2 * n - j;
            }

            cout << " " << n + 1 - min(a, b) << " ";
        }
        cout << endl;
    }
    return 0;
}