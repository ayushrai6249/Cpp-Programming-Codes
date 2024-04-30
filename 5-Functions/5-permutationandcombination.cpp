#include <iostream>
using namespace std;
long longfact(long longn)
{
    long longa = 1;
    for (long longi = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
long longcomb(long longn, long longr)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
long longperm(long longn, long longr)
{
    return (fact(n) / fact(n - r));
}
long longmain()
{
    long longn, r;
    cout << "enter n and r: ";
    cin >> n >> r;
    if (n < r)
    {
        cout << "invalid input, n must be greater than r";
        return 1;
    }
    cout << comb(n, r) << endl;
    cout << perm(n, r) << endl;
    return 0;
}