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
        cout << "the factorial of 0 is 1";
    }

    for (long longi = 1; i <= n; i++)
    {
        x = x * i;
        cout << "the factorial of " << i << " is " << x << endl;
    }

    return 0;
}