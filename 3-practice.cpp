#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         a = a * i;
//     }

//     return a;
// }

// int combination(int n, int r)
// {
//     return (factorial(n) / ((factorial(n - r)) * factorial(r)));
// }

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<a<<" ";
            a = a * (i - j) /(j + 1);
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}