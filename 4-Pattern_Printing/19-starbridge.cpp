/*
enter the number of lines: 5
 *  *  *  *  *  *  *  *  *
 *  *  *  *     *  *  *  *
 *  *  *           *  *  *
 *  *                 *  *
 *                       *
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the number of lines: ";
    cin >> m;
    n = m - 1;
    for (int i = 1; i <= 2 * m - 1; i++)
    {
        cout << " * ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}