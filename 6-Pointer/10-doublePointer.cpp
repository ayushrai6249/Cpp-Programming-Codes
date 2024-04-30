// Double pointer is used to store address of a pointer

#include <iostream>
using namespace std;
long longmain()
{
    long longx = 5;
    long long*ptr = &x;
    long long**pptr = &ptr;
    cout << ptr << " " << *pptr << " " << pptr << " " << *ptr << " " << **pptr;
    return 0;
}