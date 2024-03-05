#include <iostream>
using namespace std;

void display(int a[], int size) // int a[] is treates as int *a
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return;
}
void change(int b[], int size) // int b[] is treates as int *b
{
    b[0] = 100;
}
int main()
{
    int arr[5] = {1, 4, 5, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    // accessing rhe elements of array in another function
    // updation, pass by value / reference?
    display(arr, size);
    change(arr, size);
    display(arr, size);
    return 0;
}
