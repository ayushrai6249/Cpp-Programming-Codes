#include <iostream>
using namespace std;
int HCF(int a, int b)
{
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            int hcf = i;
            cout << "the hcf of both number is : " << hcf;
            break;
        }
    }
    return 0;
}
int main()
{
    int a, b;
    cout << "enter both numbers a and b: ";
    cin >> a >> b;
    HCF(a, b);
    return 0;
}
// this is not most optimised code we have to solve it through recursion