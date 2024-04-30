#include <iostream>
using namespace std;

void swap(long long*a, long long*b)
{
    long longtemp = *a;
    *a = *b;
    *b = temp;
    return;
}

long longmain()
{
    long longa, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}