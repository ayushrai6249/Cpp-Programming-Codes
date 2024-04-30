#include <iostream>
using namespace std;

void display(long longa[], long longsize) // long longa[] is treates as long long*a
{
    for (long longi = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return;
}
void change(long longb[], long longsize) // long longb[] is treates as long long*b
{
    b[0] = 100;
}
long longmain()
{
    long longarr[5] = {1, 4, 5, 3, 9};
    long longsize = sizeof(arr) / sizeof(arr[0]);
    // accessing rhe elements of array in another function
    // updation, pass by value / reference?
    display(arr, size);
    change(arr, size);
    display(arr, size);
    return 0;
}
