// Program to find a absolute value of a given number using inline function.
// Absolute value of a numbers only takes positive numbers.
#include<iostream>
#include<cmath>
using namespace std;
    inline float number(float x)
    {
        return labs(x); // labs means it is in cmath function which gives the absolute value.
    }
int main()
{
    long a;
    float b;
    cout<<"Enter the long value : ";
    cin>>a;
    cout<<"Enter the float value : ";
    cin>>b;
    cout<<"Long value : "<<number(a)<<endl;
    cout<<"Float value : "<<number(b)<<endl;
    return 0;
}