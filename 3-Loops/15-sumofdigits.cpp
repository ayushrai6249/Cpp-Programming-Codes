#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number: ";
    cin >> n;
    long longx = 0, y = 0;
    while (n > 0)
    {
        x = n % 10;
        y += x;
        n /= 10;
    }
    cout << y;

    return 0;
}