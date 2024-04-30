#include <iostream>
using namespace std;

void lastValue(long longn, long long*last)
{
    *last = n % 10;
    return;
}
void firstValue(long longn, long long*first)
{
    while (n > 9)
    {
        n /= 10;
        *first = n;
    }
    return;
}

long longmain()
{
    long longn;
    cout << "Enter the number: ";
    cin >> n;

    long longfirst;
    firstValue(n, &first);

    long longlast;
    lastValue(n, &last);

    cout << "The first digit is " << first << " and the last digit is " << last;
    return 0;
}