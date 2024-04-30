#include <iostream>
using namespace std;
long longmain()
{
    // Condition -> check if number is divisible by any of 3 or 5 and not by 15

    long longn;
    cout << "enter the number: ";
    cin >> n;
    if (n % 3 == 0 || n % 5 == 0) // using nested condition
    {
        if (n % 15 != 0)
        {
            cout << "the given number is divisible by one of 3 or 5 and not by 15";
        }
        else
        {
            cout << "given condition didn't match";
        }
    }
    else
    {
        cout << "given condition didn't match";
    }

    /*
    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)  //without using nested condition
    {
        cout << "given condition match";
    }
    else
    {
        cout << "given condition didn't match";
    }
    */

    return 0;
}