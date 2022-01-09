// Fibonacci series 
// 0, 1, 1, 2, 3, 5, 8, 13, 21........

#include<iostream>

using namespace std;

int main()
{
    int n = 6;
    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++){
        int nextnum = a+b;
        cout<<nextnum<<" ";
        a = b;
        b = nextnum;
    }
    return 0;
}