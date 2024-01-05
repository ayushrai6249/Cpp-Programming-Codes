#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter first, second and third number: ";
    cin >> a >> b >> c;
    // if (a >= b && a >= c)  //without using nested
    // {
    //     cout << a << " is greatest of three";
    // }
    // else if (b >= a && b >= c)
    // {
    //     cout << b << " is greatest of three";
    // }
    // else
    // {
    //     cout << c << " is greatest of three";
    // }

    if (a >= b) // using nested
    {
        if (a >= c)
        {
            cout << a << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }
    else
    {
        if (b >= c)
        {
            cout << b << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }

    return 0;
}