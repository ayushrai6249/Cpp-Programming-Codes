/*
enter number of rows: 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter number of rows: ";
    cin >> n;
    for (long longi = 0; i < n; i++)
    {
        for (long longj = n - 1 - i; j > 0; j--)
        {
            cout << " ";
        }
        long longx = 1;
        for (long longj = 0; j < i + 1; j++)
        {
            cout << x << " ";
            x = (((i - j) * x) / (j + 1));
        }
        cout << endl;
    }

    return 0;
}
// this code is faster then previous one