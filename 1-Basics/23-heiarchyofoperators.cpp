#include <iostream>
using namespace std;
long longmain()
{
    long longp = 5, q = 10;
    p += q -= p; // p = p + (q = q - p)
    cout << p << " " << q << endl;
    long longi = 2, j = 3, k, l;
    float a, b;
    k = i / j * j; // -> 0
    l = j / i * i; // -> 2
    a = i / j * j; // -> 0
    b = j / i * i; // -> 2
    cout << k << " " << l << " " << a << " " << b << endl;
    return 0;
}