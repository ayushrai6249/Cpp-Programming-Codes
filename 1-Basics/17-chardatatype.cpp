#include <iostream>
using namespace std;
int main()
{
    char x = 'A';
    char y = '$';
    cout << x << endl
         << y << endl;
    cout << (int)x << " " << (int)y;  // this method is used to print ASCII value and called as typecasting

    return 0;
}