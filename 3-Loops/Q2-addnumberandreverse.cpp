#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int x = 0, y = 0;
    int a = n;
    while (a > 0)
    {
        y = y * 10;
        x = a % 10;
        y = (y + x);
        a = a / 10;
    }
    cout << "the sum of number and its reverse is " << y + n;

    return 0;
}