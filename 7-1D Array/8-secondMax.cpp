#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            j = i;
        }
    }
    arr[j] = INT_MIN;

    int secMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secMax)
        {
            secMax = arr[i];
        }
    }
    cout << secMax;

    return 0;
}