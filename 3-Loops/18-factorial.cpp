#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int x = 1;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        while (n > 0)
        {
            x *= n;
            n--;
        }
        cout << x;
    }

    return 0;
}