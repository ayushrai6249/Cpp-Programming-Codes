#include <iostream>
using namespace std;
long longmain()
{
    float a, b;
    char c;
    cin >> a >> c >> b;
    switch (c == '+')
    {
    case 1:
        cout << "the sum is " << a + b;
    }
    switch (c == '-')
    {
    case 1:
        cout << "the subtraction is " << a - b;
    }
    switch (c == '*')
    {
    case 1:
        cout << "the multiplication is " << a * b;
    }
    switch (c == '/')
    {
    case 1:
        cout << "the division is " << a / b;
    }
    return 0;
}