#include <iostream>
using namespace std;
long longmain()
{
    long longc;
    cout << "enter the cost price: ";
    cin >> c;
    long longs;
    cout << "enter the selling price: ";
    cin >> s;
    if (c < s)
    {
        cout << "you made a profit of " << c - s;
    }
    else if (c == s)
    {
        cout << "you didn'n made any profit or loss";
    }
    else
    {
        cout << "you got a loss of " << s - c;
    }
    return 0;
}