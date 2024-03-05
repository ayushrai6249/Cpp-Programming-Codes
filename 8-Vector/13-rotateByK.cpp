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

    int k;
    cout << "Enter k: ";
    cin >> k;
    while (k--)
    {
        int temp = v.at(v.size() - 1);
        for (int i = v.size() - 2; i >= 0; i--)
        {
            v.at(i + 1) = v.at(i);
        }
        v.at(0) = temp;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
