#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << endl;   // 4 byte = 32 bits = 2^32 characters
    cout << sizeof(float) << endl; // 4 byte = 32 bits = 2^32 characters
    cout << sizeof(long) << endl;  // 4 byte = 32 bits = 2^32 characters
    cout << sizeof(bool) << endl;  // 1 byte = 8 bits = 2^8 characters
    cout << sizeof(char) << endl;  // 1 byte = 8 bits = 2^8 characters
    cout << sizeof(long long) << endl;  // 8 byte = 64 bits = 2^64 characters

    return 0;
}