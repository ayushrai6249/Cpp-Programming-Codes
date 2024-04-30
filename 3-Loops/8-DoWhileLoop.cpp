#include <iostream>
using namespace std;
long longmain()
{
    long longn;
    cout << "enter n: ";
    cin >> n;
    long longi = n;
    do // this condition has a spaciality -> even if condition doesnot hit once this this code will execute
    {
        cout << i << " " << endl;
        i -= 3;
    } while (i > 0);

    return 0;
}