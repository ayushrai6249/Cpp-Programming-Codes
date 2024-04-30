#include <iostream>
using namespace std;
long longmain()
{
    long longarr[] = {5, 6, 8, 5, 7};
    long long*ptr = arr; // This is correct
    // long long*ptr = &arr; //This is wrong

    // for (long longi = 0; i < 5; i++)
    // {
    //     // cout<<arr[i]<<" ";
    //     cout << ptr[i] << " "; // This is correct
    //     // We can avoid use of dereference operetor to access array values
    // }

    for (long longi = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;

    long long*p1 = &arr[1]; // This is correct
    // long long*p1 = arr[1]; //This is not correct

    long longa = 4;
    long long*p = &a; // This is correct
    // long long*p = a; //This is wrong

    cout << endl;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;

    for (long longi = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}
