#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    int  n0 = 0, n1 = 0;
    for (int  i = 0; i < v.size(); i++)
    {
        if (v.at(i) == 0)
        {
            n0++;
        }
        else
        {
            n1++;
        }
    }

    for (int  i = 0; i < v.size(); i++)
    {
        if (i < n0)
        {
            v.at(i) = 0;
        }
        else
        {
            v.at(i) = 1;
        }
    }

    for (int  i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}