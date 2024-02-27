// Double pointer is used to store address of a pointer

#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;
    cout << ptr << " " << *pptr << " " << pptr << " " << *ptr << " " << **pptr;
    return 0;
}