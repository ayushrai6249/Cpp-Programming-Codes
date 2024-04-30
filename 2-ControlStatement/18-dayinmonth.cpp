#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter the month number: ";
    cin >> n;
    switch (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
    {
    case 1:
        cout << "31 days";
    }
    switch (n == 4 || n == 6 || n == 9 || n == 11)
    {
    case 1:
        cout << "30 days";
    }
    switch (n == 2)
    {
    case 1:
        cout << "28 days";
    }
    return 0;
}