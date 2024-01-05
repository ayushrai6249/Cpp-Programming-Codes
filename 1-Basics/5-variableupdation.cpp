#include <iostream>
using namespace std;
int main()
{
    int x = 19;
    cout << x << endl;
    x = 5;
    cout << x << endl;
    x = x + 6;
    cout << x << endl;
    x += 5; // we can also use -=, *=, /= or %=
    cout << x << endl;

    return 0;
}