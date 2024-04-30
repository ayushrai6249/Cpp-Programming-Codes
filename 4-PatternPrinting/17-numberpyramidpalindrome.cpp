/*
enter number of lines: 5
             1
          1  2  1
       1  2  3  2  1
    1  2  3  4  3  2  1
 1  2  3  4  5  4  3  2  1
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
        for (long longj = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (long longj = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        for (long longj = i - 1; j >= 1; j--)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    return 0;
}