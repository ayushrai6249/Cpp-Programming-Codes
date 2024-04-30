/*
enter the number of lines: 4
          1
       2  1
    3  2  1
 4  3  2  1
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
        long longa = i;
        for (long longj = 1; j <= i; j++)
        {
            cout << " " << a << " ";
            a--;
        }
        cout << endl;
    }

    return 0;
}