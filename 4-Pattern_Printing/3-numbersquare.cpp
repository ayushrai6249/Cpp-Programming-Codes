/*
 1  2  3  4  5
 1  2  3  4  5
 1  2  3  4  5  //for n = 5
 1  2  3  4  5
 1  2  3  4  5
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the side of square: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }

    return 0;
}