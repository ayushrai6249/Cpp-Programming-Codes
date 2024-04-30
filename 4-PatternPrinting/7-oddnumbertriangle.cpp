/*
 1
 1  3
 1  3  5   //for n = 5;
 1  3  5  7
 1  3  5  7  9
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
        // for (long longj = 1; j <= 2 * i - 1; j += 2)
        // {
        //     cout << " " << j << " ";
        // }
        long longa = 1;
        for (long longj = 1; j <= i; j++)
        {
            cout << " " << a << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}