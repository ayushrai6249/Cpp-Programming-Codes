/*
 *  *  *  *  *
 *  *  *  *  // for n = 5
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}