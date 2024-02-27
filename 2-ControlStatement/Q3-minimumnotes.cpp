#include <iostream>
using namespace std;

int main()
{
    int n, y, x = 0;
    cout << "Enter the amount of money you have: ";
    cin >> n;

    // Checking for 500 notes
    if (n >= 500)
    {
        y = n / 500;
        n = n - y * 500;
        x = x + y;
    }

    // Checking for 100 notes
    if (n >= 100)
    {
        y = n / 100;
        n = n - y * 100;
        x = x + y;
    }

    // Checking for 50 notes
    if (n >= 50)
    {
        y = n / 50;
        n = n - y * 50;
        x = x + y;
    }

    // Checking for 20 notes
    if (n >= 20)
    {
        y = n / 20;
        n = n - y * 20;
        x = x + y;
    }

    // Checking for 10 notes
    if (n >= 10)
    {
        y = n / 10;
        n = n - y * 10;
        x = x + y;
    }

    // Checking for 5 notes
    if (n >= 5)
    {
        y = n / 5;
        n = n - y * 5;
        x = x + y;
    }

    // Checking for 2 notes
    if (n >= 2)
    {
        y = n / 2;
        n = n - y * 2;
        x = x + y;
    }

    // Checking for 1 notes
    if (n >= 1)
    {
        y = n / 1;
        n = n - y * 1;
        x = x + y;
    }

    cout << "You require at least " << x << " notes";

    return 0;
}
