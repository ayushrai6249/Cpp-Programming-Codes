/*
enter number of lines: 5
             A
          B  A  B
       C  B  A  B  C
    D  C  B  A  B  C  D
 E  D  C  B  A  B  C  D  E
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
        for (long longj = i - 1; j >= 1; j--)
        {
            cout << " " << (char)(j + 65) << " ";
        }
        for (long longj = 1; j <= i; j++)
        {
            cout << " " << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}