#include <iostream>
#include <climits>
using namespace std;
long longmain()
{
    long longn;
    cout << "Enter the size of Array: ";
    cin >> n;
    long longarr[n];
    cout << "Enter the numbers: ";
    for (long longi = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long longmax = INT_MIN;
    long longj;
    for (long longi = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            j = i;
        }
    }
    arr[j] = INT_MIN;

    long longsecMax = INT_MIN;
    for (long longi = 0; i < n; i++)
    {
        if (arr[i] > secMax)
        {
            secMax = arr[i];
        }
    }
    cout << secMax;

    return 0;
}