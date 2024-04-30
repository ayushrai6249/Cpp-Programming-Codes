#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    v.push_back(3);

    cout << v.capacity();
    cout << v.size() << endl;

    int   size = v.size();
    for (int   i = 0; i < size - 2; i++)
    {
        v.pop_back();
    }

    cout << v.capacity();
    cout << v.size() << endl;

    return 0;
}