#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter first term: ";
    cin >> n;

    int a = n;
    while (a > 0)
    {
        cout << a << " ";
        a -= 3;
    }

    // for (int i = n; i >= 0; i -= 3)
    // {
    //     cout << i << " ";
    // }

    // for (int i = 1; i <= 34; i++)
    // {
    //     cout << n << " ";
    //     n -= 3;
    // }

    // int a = 100;
    // for (; a > 0;)
    // {
    //     cout << a << " ";
    //     a -= 3;
    // }

    // for (int i = n; i > 0; i -= 3)
    // {
    //     cout << i << endl;
    // }

    return 0;
}