#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (n >= 0)
    {
        cout << "|" << n << "| = " << n;
    }
    else
    {
        cout << "|" << n << "| = " << -n;
    }

    // to change value of n to |n|
    // if (n < 0)
    // {
    //     n = -n;
    // }

    // cout << n;

    return 0;
}