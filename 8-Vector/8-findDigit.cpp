#include <iostream>
#include <vector>
using namespace std;

int  find(vector<int> &v, int  x)
{
    int  n;
    for (int  i = 0; i < v.size(); i++)
    {
        if (v.at(i) == x)
        {
            n = i;
        }
    }
    return n;
}

int  main()
{
    vector<int> v;
    cout << "Enter the numbers(6): ";
    for (int  i = 0; i < 6; i++)
    {
        int  r;
        cin >> r;
        v.push_back(r);
    }

    int  x;
    cout << "Enter the value of x: ";
    cin >> x;

    cout << find(v, x);

    return 0;
}