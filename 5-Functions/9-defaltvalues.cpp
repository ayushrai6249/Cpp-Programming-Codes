#include <iostream>
using namespace std;
void fun(int x = 7, int y = 8) //if here y is not given a default value it will be an error
{
    cout << x << " " << y << endl;// here x and y are defalt value(if one is given a default value we will to give it to others)
}
int main()
{
    int x = 4;
    int y = 5;
    fun(x, y); 
    fun(x);
    return 0;
}