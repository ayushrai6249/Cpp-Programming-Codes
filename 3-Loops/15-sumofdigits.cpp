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
        x = n % 10;
        y += x;
        n /= 10;
    }
    cout << y;

    return 0;
}