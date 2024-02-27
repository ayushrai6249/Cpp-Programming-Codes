#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int b = 9;
    cout << &a << endl; // 0x61ff0c
    cout << &b << endl; // 0x61ff08
    return 0;
}