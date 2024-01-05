#include <iostream>
using namespace std;
int main()
{
    /*
    91 - 100 -> excelent
    81 - 90 -> very good
    71 - 80 -> good
    61 - 70 -> can do better
    51 - 60 -> average
    41 - 50 -> below average
    < 40 -> fail
    */
    int n;
    cout << "enter your marks: ";
    cin >> n;
    if (n <= 100 && n > 90)
    {
        cout << "excelent";
    }
    else if (n > 80)
    {
        cout << "very good";
    }
    else if (n > 70)
    {
        cout << "good";
    }
    else if (n > 60)
    {
        cout << "can de better";
    }
    else if (n > 50)
    {
        cout << "average";
    }
    else if (n > 40)
    {
        cout << "below average";
    }
    else if (n < 40)
    {
        cout << "fail";
    }
    else
    {
        cout << "invalid input";
    }

    return 0;
}