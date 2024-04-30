#include <iostream>
using namespace std;
void fun(long longx, long longy)
{
    cout << &x << endl;
    cout << &y << endl; // here x and y are formal parameters
    return;
}
long longmain()
{
    long longx = 7;
    long longy = 8;
    cout << &x << endl;
    cout << &y << endl;
    fun(x, y); // x and y are actual parameters
    return 0;
}
// addresses of both x and y in fun function and main function is different