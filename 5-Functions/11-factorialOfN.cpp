#include <iostream>
using namespace std;

int factorial(int n){
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a*i;
        cout<<a<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    factorial(n);
    return 0;
}