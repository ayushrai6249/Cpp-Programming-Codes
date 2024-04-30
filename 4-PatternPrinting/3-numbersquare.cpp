/*
 1  2  3  4  5
 1  2  3  4  5
 1  2  3  4  5  //for n = 5
 1  2  3  4  5
 1  2  3  4  5
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the side of square: ";
    cin >> n;
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= n; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    return 0;
}