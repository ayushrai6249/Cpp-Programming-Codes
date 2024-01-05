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
        cout << "the factorial of 0 is 1";
    }

    for (int i = 1; i <= n; i++)
    {
        x = x * i;
        cout << "the factorial of " << i << " is " << x << endl;
    }

    return 0;
}