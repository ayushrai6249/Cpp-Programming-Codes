/*
enter the number of lines: 5
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of lines: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int a = i;
        if (i > n)
        {
            a = 2 * n - i;
        }
        for (int j = 1; j <= a; j++)
        {
            cout << " * ";
        }
        if (i > n)
        {
            a = 2 * n - i;
        }

        cout << endl;
    }

    return 0;
}