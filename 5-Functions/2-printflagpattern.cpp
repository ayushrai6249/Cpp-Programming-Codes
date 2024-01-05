/*
enter the number of lines in each three triangle: 3 4 5
 *
 *  *
 *  *  *
 *
 *  *
 *  *  *
 *  *  *  *
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/

#include <iostream>
using namespace std;
void triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return;
}
int main()
{
    int a, b, c;
    cout << "enter the number of lines in each three triangle: ";
    cin >> a >> b >> c;
    triangle(a);
    triangle(b);
    triangle(c);
    return 0;
}