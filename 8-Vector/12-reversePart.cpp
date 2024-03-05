#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Enter the numbers(5): ";
    for (int i = 0; i < 5; i++)
    {
        int r;
        cin >> r;
        v.push_back(r);
    }

    int i, j;
    cout << "Enter i and j: ";
    cin >> i >> j;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    for (; i <= j; i++, j--)
    {
        int temp = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = temp;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}