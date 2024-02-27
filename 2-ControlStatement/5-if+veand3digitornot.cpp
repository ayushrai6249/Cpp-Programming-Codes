#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n >= 100 && n < 1000)
    {
        cout << "the given number is both positive and three digit";
    }
    else
    {
        cout << "the given number is not both positive and three digit";
    }
    
    return 0;
}