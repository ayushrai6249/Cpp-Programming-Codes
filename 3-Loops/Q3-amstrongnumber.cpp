#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int x = 0, y = 0, a = i;
        while (a > 0)
        {
            x = a % 10;
            x = x * x * x;
            y += x;
            a /= 10;
        }
        if (y == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}