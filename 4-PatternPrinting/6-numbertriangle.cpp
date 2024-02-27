/*
 1
 1  2
 1  2  3  // for n = 5
 1  2  3  4
 1  2  3  4  5
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
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    return 0;
}