#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int x = 1, y = 1, z = 0;
    if (n == 0)
    {
        cout << 0;
    }
    else if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            z = x + y;
            y = x;
            x = z;
        }
        cout << z;
    }

    return 0;
}