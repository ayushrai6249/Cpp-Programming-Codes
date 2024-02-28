#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of Array: ";
    cin >> m;
    int arr[m];
    cout << "Enter the numbers: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the recuired number to check number of values greater than it: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}