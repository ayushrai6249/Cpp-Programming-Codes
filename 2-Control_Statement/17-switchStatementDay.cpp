#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter day number: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "sunday" << endl;
        // break;
    case 2:
        cout << "monday" << endl;
        // break;
    case 3:
        cout << "tuesday" << endl;
        // break;
    case 4:
        cout << "wednesday" << endl;
        // break;
    case 5:
        cout << "thursday" << endl;
        // break;
    case 6:
        cout << "friday" << endl;
        // break;
    case 7:
        cout << "saturday" << endl;
        // break;
    default:
        break;
    }
    return 0;
}