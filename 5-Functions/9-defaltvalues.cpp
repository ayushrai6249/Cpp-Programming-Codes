#include <iostream>
using namespace std;
void fun(int x = 7, int y = 8) // if here y is not given a default value it will be an error
{
    cout << x << " " << y << endl; // here x and y are defalt value(if one is given a default value we will to give it to others)
}
void diff(int a= 1, float b=2.3)
{
    cout << a << " " << b << endl;
}
int main()
{
    int x = 4;
    int y = 5;
    fun(x, y);
    fun(x);
    fun(4);

    int a = 2, b=4.2;
    diff(a,b);
    diff(2);
    // diff(2.3)//This will be error

    return 0;
}