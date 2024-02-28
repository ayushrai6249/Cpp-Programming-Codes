#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {9, 86, 2, 2, 8};
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        a += arr[i];
    }
    cout << a;

    return 0;
}