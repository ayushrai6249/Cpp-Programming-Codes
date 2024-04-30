#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int> &v)
{
    int  i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v.at(i) == 0)
        {
            i++;
        }
        else if (v.at(j) == 1)
        {
            j--;
        }
        else if (v.at(i) == 1 && v.at(j) == 0)
        {
            int  temp = v.at(i);
            v.at(i) = v.at(j);
            v.at(j) = temp;
            i++;
            j--;
        }
    }
}

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

    sort01(v);

    for (int  i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}