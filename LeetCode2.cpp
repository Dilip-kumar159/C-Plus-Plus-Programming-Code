// Number of bits
#include<iostream>

using namespace std;

int main()
{
    long n = 1101;
    int count = 0;
    while(n!=0){
        if(n&1){
             count++;
        }
        n = n>>1;
    }
    cout<<"Number of 1 bit is : "<<count;
    return 0;
}