#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {3, 2, 6, 4, 1, 3, 7}; // We can avoid size but we must have to define the array in {}
    // arr[0] = 3;
    // arr[1] = 2;
    // arr[2] = 6;
    // arr[3] = 4;
    // arr[4] = 1;
    // arr[4] = 3;
    // arr[6] = 7;

    // Input
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    // Output
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}