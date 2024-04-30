#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number: ";
    cin >> n;
    long longx = 0;
    while (n > 0)
    {
        n /= 10;
        x++;
    }
    if (n == 0)
    {
        cout << "there is 1 digits in the number";
    }
    else
    {
        cout << "there are " << x << " digits in the number";
    }

    return 0;
}