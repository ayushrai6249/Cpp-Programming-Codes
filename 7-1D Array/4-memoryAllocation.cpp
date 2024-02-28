#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << &arr[i] << endl;
    }
    // Memory will be Allocatied dynamically
    // 0x61fefc
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08

    cout<<&arr; //First Address will be the address of array(cout<<arr)

    return 0;
}