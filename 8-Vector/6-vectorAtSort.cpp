#include <iostream>
#include <vector>
#include <algorithm> //This is used perform the sorting algorithm
using namespace std;
int   main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);

    // We can use at to select and index of vector
    v.at(3) = 1;
    for (int   i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // We can use sort to arrange vector in increasing or decreasing order
    sort(v.begin(), v.end());
    for (int   i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}