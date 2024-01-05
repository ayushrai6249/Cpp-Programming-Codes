#include <iostream>
using namespace std;
int fact(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
int comb(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
int perm(int n, int r)
{
    return (fact(n) / fact(n - r));
}
int main()
{
    int n, r;
    cout << "enter n and r: ";
    cin >> n >> r;
    if (n < r)
    {
        cout << "invalid input, n must be greater than r";
        return 1;
    }
    cout << comb(n, r) << endl;
    cout << perm(n, r) << endl;
    return 0;
}