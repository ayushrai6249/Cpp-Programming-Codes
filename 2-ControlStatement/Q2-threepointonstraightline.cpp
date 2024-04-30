#include <iostream>
using namespace std;
long longmain()
{
    long longx1, y1, x2, y2, x3, y3;
    cout << "enter the following:" << endl
         << "(x1, y1): ";
    cin >> x1 >> y1;
    cout << "(x2, y2): ";
    cin >> x2 >> y2;
    cout << "(x3, y3): ";
    cin >> x3 >> y3;
    if (((y2 - y1) / (x2 - x1)) == ((y3 - y2) / (x3 - x2)))
    {
        cout << "points lie in straight line";
    }
    else
    {
        cout << "points do not lie in straight line";
    }

    return 0;
}