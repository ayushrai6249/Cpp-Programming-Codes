/*
enter the number of lines: 5
 *                       *
    *                 *
       *           *
          *     *
             *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i == j) || (i + j == 2 * n))
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