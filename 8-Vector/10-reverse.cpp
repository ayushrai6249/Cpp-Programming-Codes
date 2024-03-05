#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    cout << "Enter the numbers(8): ";
    for (int i = 0; i < 8; i++)
    {
        int r;
        cin >> r;
        v1.push_back(r);
    }

    vector<int> v2;
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        int r = v1.at(i);
        v2.push_back(r);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }

    return 0;
}