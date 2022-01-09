// Output Questions

#include<iostream>

using namespace std;

int main()
{
    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;

    int *pp = 0;
    int a = 10;
    pp = &a;
    cout<<*pp<<endl;

    return 0;
}