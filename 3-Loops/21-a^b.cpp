#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter base: ";
    cin >> a;
    cout << "enter power: ";
    cin >> b;
    int x = 1;
    if (a == 0 && b == 0)
    {
        cout << "not defined";
    }
    else if (b >= 0)
    {
        for (int i = 1; i <= b; i++)
        {
            x = x * a;
        }
        cout << x;
    }
    else
    {
        for (int i = 1; i <= -b; i++)
        {
            x = x * a;
        }
        cout << (float)1 / x;
    }

    return 0;
}