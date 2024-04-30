#include <iostream>
#include <vector> //Dynamic array
using namespace std;
int  main()
{
    vector<int> v; // Size is not mentioned
    // For inserting we do not use array method we can use it for updation and accessing of values
    v.push_back(3);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(19);
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(13);
    cout << v.size() << " " << v.capacity() << endl;
    // Understand size Vs capacity
    for (int   i = 0; i < v.size(); i++) // We can use v.size() to get the size of the vector
    {
        cout << v[i] << " ";
    }

    return 0;
}