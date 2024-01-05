#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int x = 0, y = 0;
    while (n > 0)
    {
        y = y * 10;
        x = n % 10;
        y = (y + x);
        n = n / 10;
    }
    cout << "reverse of the digit is " << y;

    return 0;
}