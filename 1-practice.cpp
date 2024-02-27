#include <iostream>
using namespace std;

void flag(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int a, b, c;
    cout << "Enter a, b & c: ";
    cin >> a >> b >> c;
    flag(a);
    flag(b);
    flag(c);
    return 0;
}