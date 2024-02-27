#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    cout << ptr << endl;  // 0x61ff08
    cout << *ptr << endl; // 5
    (*ptr)++;
    cout << *ptr << endl; // 6
    ptr += 1;
    cout << ptr << endl;  // 0x61ff0c => (0x61ff0c = 0x61ff08 + 4)
    cout << *ptr << endl; // Garbage value

    return 0;
}