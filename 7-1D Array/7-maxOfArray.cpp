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

    // int max = 0;
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}