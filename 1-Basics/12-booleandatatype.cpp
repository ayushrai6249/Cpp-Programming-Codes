#include <iostream>
using namespace std;
int main()
{
    // bool flag = false;  //false is 0 or off
    // cout << flag << endl;
    bool flag = true; // true is 1 or n
    cout << flag << endl;
    cout << (3 > 5) << endl;  // false = 0
    cout << (3 == 5) << endl; // false = 0
    cout << (3 < 5) << endl;  // true = 1
    cout << (3 != 5) << endl; // true = 1

    bool p = false;
    bool q = false;
    bool r = true;
    cout << (p == q == r);   // go left to right p == q -> 1 == r -> 1
    cout << (p == (q == r)); // q != r -> p == 0 -> 1
    return 0;
}