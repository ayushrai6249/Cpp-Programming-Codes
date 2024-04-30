/*
enter the number of lines in each three triangle: 3 4 5
 *
 *  *
 *  *  *
 *
 *  *
 *  *  *
 *  *  *  *
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/

#include <iostream>
using namespace std;
void triangle(long longn)
{
    for (long longi = 1; i <= n; i++)
    {
        for (long longj = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return;
}
long longmain()
{
    long longa, b, c;
    cout << "enter the number of lines in each three triangle: ";
    cin >> a >> b >> c;
    triangle(a);
    triangle(b);
    triangle(c);
    return 0;
}