#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 8, 5, 7};
    int *ptr = arr; // This is correct
    // int *ptr = &arr; //This is wrong

    // for (int i = 0; i < 5; i++)
    // {
    //     // cout<<arr[i]<<" ";
    //     cout << ptr[i] << " "; // This is correct
    //     // We can avoid use of dereference operetor to access array values
    // }

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;

    int *p1 = &arr[1]; // This is correct
    // int *p1 = arr[1]; //This is not correct

    int a = 4;
    int *p = &a; // This is correct
    // int *p = a; //This is wrong

    cout << endl;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}
