/*
enter the number of lines: 5
 1  2  3  4  5  6  7  8  9
 1  2  3  4     6  7  8  9
 1  2  3           7  8  9
 1  2                 8  9
 1                       9
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn, m;
    cout << "enter the number of lines: ";
    cin >> m;
    n = m - 1;
    for (long longi = 1; i <= 2 * m - 1; i++)
    {
        cout << " " << i << " ";
    }
    cout << endl;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n - i + 1; j++)
        {
            cout << " " << j << " ";
        }
        for (long longj = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= n - i + 1; j++)
        {
            cout << " " << j + n + i << " ";
        }
        cout << endl;
    }

    return 0;
}