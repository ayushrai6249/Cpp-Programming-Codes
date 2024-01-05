#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter any character: ";
    cin >> ch;
    if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "given character is vovel";
        }
        else
        {
            cout << "given character is consonent";
        }
    }
    else
    {
        cout << "the given character is not an alphabet";
    }

    return 0;
}