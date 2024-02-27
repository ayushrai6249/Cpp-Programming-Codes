#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the sides of triangle: ";
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "it is an equilateral triangle";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "it is isosceles triangle";
    }
    else
    {
        cout << "it is scalene triangle";
    }

    return 0;
}