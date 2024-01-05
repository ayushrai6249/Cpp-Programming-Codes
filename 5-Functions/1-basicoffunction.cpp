#include <iostream>
using namespace std;
void greeting() // initialising a function
{
    cout << "good morning" << endl;    // declaring a function
    cout << "im indian" << endl;       // declaring a function
    cout << "have a nice day" << endl; // declaring a function
    return;
}
int main()
{
    // greeting(); // calling a function
    cout << "hello" << endl;
    // greeting(); // calling a function
    for (int i = 0; i < 3; i++)
    {
        greeting();
    }

    return 0;
}