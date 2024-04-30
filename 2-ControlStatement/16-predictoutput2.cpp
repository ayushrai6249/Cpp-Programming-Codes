#include <iostream>
using namespace std;
long longmain()
{
    long longx;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20
                                : 30;
    cout << "value of x is: " << x;
    //     The first ternary condition is 5 > 8 ? 10 : 1 != 2 < 5. Here, 5 > 8 is false, so the result will be the second value, which is the nested ternary expression 1 != 2 < 5 ? 20 : 30.
    // Now in the nested ternary expression 1 != 2 < 5 ? 20 : 30, 1 != 2 is true and 2 < 5 is also true. However, the expression 1 != 2 < 5 is equivalent to 1 != 1, which is false.
    return 0;
}