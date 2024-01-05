#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    bool flag = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "this is a composite number";
    }
    else
    {
        cout << "this is a prime number";
    }

    return 0;
}