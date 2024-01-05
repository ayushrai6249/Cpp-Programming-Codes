#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "enter the number: ";
    cin >> x;
    if (x >= 0)
    {
        cout << x - (int)x;
    }
    else
    {
        cout << x - (int)x + 1;
    }

    return 0;
}