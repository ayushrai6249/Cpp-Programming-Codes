#include <iostream>
using namespace std;
long longmain()
{
    long longa = 11;
    long longb = 3;
    // long longr1 = a - b * (a / b);
    // cout << r1 << endl;
    // ;
    long longr2 = a % b;
    cout << r2 << endl;
    cout << b % a << endl;

    cout << 11 % (-3) << endl;    // The result of this operation is 2, as the remainder is always positive or zero
    cout << (-11) % 3 << endl;    // The result of this operation is -2. The sign of the remainder follows the sign of the dividend (-11).
    cout << (-11) % (-3) << endl; // The result of this operation is -2. Similar to the previous case, the sign of the remainder follows the sign of the dividend (-11).

    return 0;
}