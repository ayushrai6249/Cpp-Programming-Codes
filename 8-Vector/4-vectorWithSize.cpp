#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(5); // Now we can use array method [] to initialise
    cout << v1.size() << " ";
    cout << v1.capacity() << " " << endl;

    // vector<int> v2(5); // Here initial size and each value is 5 and 0
    vector<int> v2(5, 7); // Here initial size and each value is 5 and 7
    cout << v2.size() << " ";
    cout << v2.capacity() << " " << endl;

    return 0;
}