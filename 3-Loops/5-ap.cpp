// 4, 7, 10, ...

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 4; i <= 3 * n + 1; i += 3)
    {
        cout << i << " ";
    }

    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << " ";
    //     a += 2;
    // }

    return 0;
}