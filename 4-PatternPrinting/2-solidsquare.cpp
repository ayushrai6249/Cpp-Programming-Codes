/*
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *  // for n = 5
 *  *  *  *  *
 *  *  *  *  *
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the side of square: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}