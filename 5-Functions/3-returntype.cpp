#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "enter first and second number: ";
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}