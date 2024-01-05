#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
    }
    for (int i = 1; i <= t; i++)
    {
        /* code */
        while (n > 0)
        {
            n -= 4;
        }
        cout<<n;
        // if (n == 0)
        // {
        //     cout << "YES" << endl;
        //     ;
        // }
        // else
        // {
        //     n += 1;
        //     if (n == 0)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }
    }

    return 0;
}
