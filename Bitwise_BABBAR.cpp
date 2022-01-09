// Bitwise operator
// AND & , OR | , NOT ~, XOR ^.

#include<iostream>

using namespace std;

int main()
{
    int a = 6, b = 4;
    cout<<"a & b : "<<(a&b)<<endl;
    cout<<"a | b : "<<(a|b)<<endl;
    cout<<"~a : "<<(~a)<<endl;
    cout<<"a^b : "<<(a^b)<<endl;

    cout<<"Right Shift"<<endl;
    cout<<(17>>1)<<endl; // Right shift 17/2 = 8 final output.
    cout<<(17>>2)<<endl; // Right shift 17/2 is 8/2 = 4 final output.
    cout<<(17>>3)<<endl; // Right shift 17/2 is 8/2 is 4/2 = 2 final output.

    cout<<"Left Shift"<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
    cout<<(21<<2)<<endl;
    return 0;
}