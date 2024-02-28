#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 25, 68, 65, 2, 14, 25, 36, 68, 321, 36};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<length;

    return 0;
}