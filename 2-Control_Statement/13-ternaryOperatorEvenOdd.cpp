#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the integer: ";
    cin >> x;
    // expression 1? expression 2: expression 3;
    // condition? if_true: if_false;
    x % 2 == 0 ? cout << "even" : cout << "odd";

    return 0;
}
