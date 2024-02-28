#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of array: ";
    cin >> m;
    int arr[m];
    cout << "Enter the numbers in array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int n;
    cout << "Enter the number to search: ";
    cin >> n;
    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        // if (arr[i] == n)
        // {
        //     cout << "Present, index = " << i;
        //     break;
        // }
        // else
        // {
        //     cout << "Absent";
        //     break;
        // }

        if (arr[i] == n)
        {
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "Absent";
    }
    else
    {
        cout << "Present";
    }

    return 0;
}