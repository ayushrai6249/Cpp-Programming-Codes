#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int n = 9;
    int y = 2;
    int z = n / y;

    cout << "the sum is: " << x + y << endl;
    cout << "the subtraction is: " << x - y << endl;
    cout << "the  mltiplication is: " << x * y << endl;
    cout << "the  divison of x and y is: " << x / y << endl;
    cout << "the  divison of n and y is: " << z << endl; // 4 not 4.5

    return 0;
}