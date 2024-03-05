#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &a) // Vector are pass by value We can just use & here and it will be pass by reference
{
    a.at(0) = 1;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(19);
    v.push_back(13);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    change(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}