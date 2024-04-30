/*
enter number of lines: 5
             1
          2     2
       3           3
    4                 4
 5                       5
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
        for (long longj = 1; j <= 2 * n - 1; j++)
        {
            long longb = j;
            if (j > n)
            {
                b = 2 * n - j;
            }

            if (i + b == n + 1)
            {
                cout << " " << i << " ";
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