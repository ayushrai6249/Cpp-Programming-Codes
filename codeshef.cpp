#include <iostream>
#include <limits.h>
using namespace std;

int sumarr(int arr[], int j)
{
    int sum = 0;
    for (int i = 0; i <= j; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int maxof(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int srr[n];
        for (int i = 0; i < n; i++)
        {
            srr[i] = sumarr(arr, i) + arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << srr[i] << " ";
        }
        cout<<endl;
        cout << maxof(srr, n) << endl;
    }

    return 0;
}