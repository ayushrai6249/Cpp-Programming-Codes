#include <iostream>
using namespace std;

void lastValue(int n, int *last)
{
    *last = n % 10;
    return;
}
void firstValue(int n, int *first)
{
    while (n > 9)
    {
        n /= 10;
        *first = n;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int first;
    firstValue(n, &first);

    int last;
    lastValue(n, &last);

    cout << "The first digit is " << first << " and the last digit is " << last;
    return 0;
}