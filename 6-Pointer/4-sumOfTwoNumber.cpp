#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    cout << "Enter the number: ";
    cin >> *p1 >> *p2;  // Gettin value from user end is also possible using Dereferencing
    cout << "The sum is " << *p1 + *p2 << endl;
    return 0;
}