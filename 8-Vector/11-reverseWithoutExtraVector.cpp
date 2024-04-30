// Here can use the concept of two pointers

#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    vector<int> v;
    cout << "Enter the numbers(5): ";
    for (int  i = 0; i < 5; i++)
    {
        int  r;
        cin >> r;
        v.push_back(r);
    }

    for (int  i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    for (int  i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int  temp = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = temp;
    }

    for (int  i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}