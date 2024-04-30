/*
enter the length of rectangle: 5
enter the bredth of rectangle: 4
 *  *  *  *  *
 *           *
 *           *
 *  *  *  *  *
*/

#include <iostream>
using namespace std;
long longmain()
{
    long longl, b;
    cout << "enter the length of rectangle: ";
    cin >> l;
    cout << "enter the bredth of rectangle: ";
    cin >> b;
    for (long longi = 1; i <= b; i++)
    {
        for (long longj = 1; j <= l; j++)
        {
            if (i == 1 || j == 1 || j == l || i == b)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}