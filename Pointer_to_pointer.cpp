// Pointer to Pointer 
#include<iostream>

using namespace std;

int main()
{
    int a = 10; 
    int *p = &a;
    int **q = &p;
    // Below statements prints same address pf a.
    cout<<"The address of the a is "<<&a<<endl;
    cout<<"The address of the a is "<<p<<endl;
    cout<<"The address of the a is "<<*q<<endl;
    // Below statements prints same value of a. 
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*p<<endl;
    cout<<"The value of a is "<<**q<<endl;
    return 0;
}