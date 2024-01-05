/*
enter number of rows: 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j > 0; j--)
        {
            cout << " ";
        }
        int x = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << x << " ";
            x = (((i - j) * x) / (j + 1));
        }
        cout << endl;
    }

    return 0;
}
// this code is faster then previous one