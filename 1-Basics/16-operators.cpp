#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    cout << (x == 3) << endl; // true -> 
    cout << (x == 7) << endl; // false -> 
    cout << (x = 7) << endl;  // makes x = 
    cout << x << endl;

    return 0;
}