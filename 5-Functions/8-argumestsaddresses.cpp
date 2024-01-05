#include <iostream>
using namespace std;
void fun(int x, int y)
{
    cout << &x << endl;
    cout << &y << endl; // here x and y are formal parameters
    return;
}
int main()
{
    int x = 7;
    int y = 8;
    cout << &x << endl;
    cout << &y << endl;
    fun(x, y); // x and y are actual parameters
    return 0;
}
// addresses of both x and y in fun function and main function is different