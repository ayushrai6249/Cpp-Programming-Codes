#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    char j = 'A';
    if (i == j)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    int k = 5;
    cout << k << endl
         << (k == 10) << endl
         << (k == 5) << endl
         << (k = 10) << endl
         << k;

    return 0;
}