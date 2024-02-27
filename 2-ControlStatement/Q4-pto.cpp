#include <iostream>
using namespace std;
int main()
{
    int test = 0;
    cout << "first character: " << '1' << endl;
    cout << "second character: " << (test ? 3 : '1') << endl; // i ternary both false and true should be same type here ASCII value of '1' is printed
    return 0;
}