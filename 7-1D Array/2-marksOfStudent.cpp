// In a array if marks of any student is less than 35 print its roll number.

#include <iostream>
using namespace std;
int main()
{
    // int arr[6] = {50, 81, 32, 98, 22, 72};

    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int arr[n];

    cout<<"Enter the marks of each student: ";
    // Input
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 35)
        {
            cout << i << endl;
        }
    }
    return 0;
}