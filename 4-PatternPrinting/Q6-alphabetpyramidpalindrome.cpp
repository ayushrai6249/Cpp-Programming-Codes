/*
enter number of lines: 5
             A
          B  A  B
       C  B  A  B  C
    D  C  B  A  B  C  D
 E  D  C  B  A  B  C  D  E
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << " " << (char)(j + 65) << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " " << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}