// Program to add a given number using default arguments.
#include<iostream>

using namespace std;
    int add(int a, int b=10, int c=20)// Here b and c are the Default argument
    {
        return (a+b+c);
    }
int main()
{
    int a=20;
    cout<<"The sum of a , b and c is : "<<add(a);
    // cout<<"The sum of a and b is : "<<add(a,b,c); This won't work.
    // if we use default arguments.
    return 0;
}