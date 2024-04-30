#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number: ";
    cin >> n;
    long longx = 1;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        while (n > 0)
        {
            x *= n;
            n--;
        }
        cout << x;
    }

    return 0;
}