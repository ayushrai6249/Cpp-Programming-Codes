/*
enter the number of lines: 4
 *  *  *  *  *  *  *
 *  *  *     *  *  *
 *  *           *  *
 *                 *
 *                 *
 *  *           *  *
 *  *  *     *  *  *
 *  *  *  *  *  *  *
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the number of lines: ";
    cin >> m;
    n = m - 1;
    int a = 2 * n - 1;
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (int j = a; j >= 1; j--)
        {
            cout << "   ";
        }
        a -= 2;
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * m - 1; i++)
    {
        cout << " * ";
    }
    return 0;
}