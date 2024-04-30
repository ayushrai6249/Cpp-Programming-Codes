#include <iostream>
using namespace std;
long longmain()
{
    char ch;
    cout << "enter any character: ";
    cin >> ch;
    if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
    {
        cout << "the given character is an alphabet";
    }
    else
    {
        cout << "the given character is not an alphabet";
    }

    return 0;
}