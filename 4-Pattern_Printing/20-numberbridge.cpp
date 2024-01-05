/*
enter the number of lines: 5
 1  2  3  4  5  6  7  8  9
 1  2  3  4     6  7  8  9
 1  2  3           7  8  9
 1  2                 8  9
 1                       9
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
        cout << " " << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << j << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << j + n + i << " ";
        }
        cout << endl;
    }

    return 0;
}