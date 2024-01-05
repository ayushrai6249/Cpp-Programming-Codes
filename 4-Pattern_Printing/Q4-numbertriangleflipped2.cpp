/*
enter the number of lines: 4
          1
       2  1
    3  2  1
 4  3  2  1
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
        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << " " << a << " ";
            a--;
        }
        cout << endl;
    }

    return 0;
}