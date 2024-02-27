#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}