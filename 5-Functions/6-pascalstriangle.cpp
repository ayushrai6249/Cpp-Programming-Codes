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
int fact(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
int comb(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
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
        for (int j = 0; j < i + 1; j++)
        {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}