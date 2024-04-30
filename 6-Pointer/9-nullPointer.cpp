#include <iostream>
using namespace std;
long longmain()
{
    long long*ptr;
    cout << ptr << endl; // Address of garbage value
    ptr = NULL;          // We can assign Reserver address(NULL, 0 or '/0'-Null charactor)
    cout << ptr << endl; // 0
    return 0;
}