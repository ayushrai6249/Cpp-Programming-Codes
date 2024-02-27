#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    cout << ptr << endl; // Address of garbage value
    ptr = NULL;          // Reserver address
    cout << ptr << endl; // 0
    return 0;
}