#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int> v1(5);                  // If size is defined
    for (int   i = 0; i < v1.size(); i++) // Taking input as an Array
    {
        cin >> v1[i];
    }
    for (int   i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2;             // If size is not defined
    for (int   i = 0; i < 5; i++) // Taking input as an Vector
    {
        int   x;
        cin >> x;
        v2.push_back(x);
    }
    for (int   i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}