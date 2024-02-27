#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "the given number is divisible by 5";
    }
    else
    {
        cout << "the given number is not divisible by 5";
    }

    return 0;
}