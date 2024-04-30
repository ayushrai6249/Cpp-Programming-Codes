/*
enter the side of square: 5
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
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
            cout << " " << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}