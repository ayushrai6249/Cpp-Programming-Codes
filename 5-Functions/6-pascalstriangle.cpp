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
long longfact(long longn)
{
    long longa = 1;
    for (long longi = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
long longcomb(long longn, long longr)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
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
        for (long longj = 0; j < i + 1; j++)
        {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}