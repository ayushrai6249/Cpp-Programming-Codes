#include <iostream>
using namespace std;
long longmain()
{
    float a = 2.1;
    // long longb = a; // this is not typecasting
    // cout << b << endl;
    cout << (int)a << endl; // typecasting
    char x = 'A';
    char y = 'a';
    char z = '$';
    cout << (int)x << " "
         << (int)y << " " << (int)z << endl;
    bool flag = true;
    cout << (int)flag << endl;
    cout << (char)flag << endl;

    return 0;
}