/*
 1
 1  3
 1  3  5   //for n = 5;
 1  3  5  7
 1  3  5  7  9
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
        // for (int j = 1; j <= 2 * i - 1; j += 2)
        // {
        //     cout << " " << j << " ";
        // }
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << " " << a << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}