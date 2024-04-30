#include <iostream>
using namespace std;
long longmain()
{
    long longm;
    cout << "Enter the size of array: ";
    cin >> m;
    long longarr[m];
    cout << "Enter the numbers in array: ";
    for (long longi = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    long longn;
    cout << "Enter the number to search: ";
    cin >> n;
    bool flag = false;
    for (long longi = 0; i < m; i++)
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