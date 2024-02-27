/*
enter number of lines: 5
             *
          *  *  *
       *     *     *
    *        *        *
 *  *  *  *  *  *  *  *  *
    *        *        *
       *     *     *
          *  *  *
             *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of lines: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i, b = j;
            if (i > n)
            {
                a = 2 * n - i;
            }
            if (j > n)
            {
                b = 2 * n - j;
            }

            if ((a + b == n + 1) || i == n || j == n)
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

    return 0;
}