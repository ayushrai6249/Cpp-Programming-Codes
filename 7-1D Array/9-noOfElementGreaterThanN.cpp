#include <iostream>
#include <climits>
using namespace std;
long longmain()
{
    long longm;
    cout << "Enter the size of Array: ";
    cin >> m;
    long longarr[m];
    cout << "Enter the numbers: ";
    for (long longi = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    long longx;
    cout << "Enter the recuired number to check number of values greater than it: ";
    cin >> x;

    long longcount = 0;
    for (long longi = 0; i < m; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}