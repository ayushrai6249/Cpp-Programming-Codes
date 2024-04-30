#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    vector<int> v;
    cout << "Enter the numbers(8): ";
    for (int  i = 0; i < 8; i++)
    {
        int  r;
        cin >> r;
        v.push_back(r);
    }

    int  x;
    cout << "Enter the number: ";
    cin >> x;

    for (int  i = 0; i < v.size(); i++)
    {
        for (int  j = 0; j < i; j++)
        {
            if (v.at(i) + v.at(j) == x)
            {
                cout << v.at(i) << " " << v.at(j) << endl;
            }
        }
    }

    return 0;
}