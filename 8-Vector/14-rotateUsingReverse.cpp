#include <iostream>
#include <vector>
using namespace std;

void reversePart(vector<int> &v, int i, int j)
{
    for (; i <= j; i++, j--)
    {
        int temp = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = temp;
    }
    return;
}
void rotate(vector<int> &v, int k)
{
    reversePart(v, 0, v.size() - k - 1);
    reversePart(v, v.size() - k, v.size() - 1);
    reversePart(v, 0, v.size() - 1);
    return;
}
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

    rotate(v, k);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}