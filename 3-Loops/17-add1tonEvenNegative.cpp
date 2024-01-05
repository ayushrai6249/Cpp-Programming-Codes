#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of digits: ";
    cin >> n;
    // int x = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         x = x - i;
    //     }
    //     else
    //     {
    //         x = x + i;
    //     }
    // }
    // cout << x;

    int x = 0;
    if (n % 2 == 0)
    {
        x = -n / 2;
    }
    else
    {
        x = (n + 1) / 2;
    }

    cout << x;

    return 0;
}