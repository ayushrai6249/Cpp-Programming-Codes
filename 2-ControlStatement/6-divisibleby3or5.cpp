#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the number: ";
    cin >> n;
    if (n % 3 == 0 || n % 5 == 0)
    {
        cout << "the given number is divisible by one of 3 or 5";
    }
    else
    {
        cout << "the given number is  not divisible by any of 3 or 5";
    }

    return 0;
}