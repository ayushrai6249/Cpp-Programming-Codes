/*
 *  *  *  *  *  *
 *  *  *  *  *  *  // for 6, 4
 *  *  *  *  *  *
 *  *  *  *  *  *
 */

#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "enter the length of rectangle: ";
    cin >> l;
    cout << "enter the bredth of rectangle: ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}