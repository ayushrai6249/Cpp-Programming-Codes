/*
enter the number of lines: 5
 1
 A  B
 1  2  3
 A  B  C  D
 1  2  3  4  5
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
        for (long longj = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << " " << j << " ";
            }
            else
            {
                cout << " " << (char)(j + 64) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}