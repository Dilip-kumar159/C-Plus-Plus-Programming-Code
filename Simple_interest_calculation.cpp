#include<iostream>

using namespace std;

int main()
{
    float principal, rate, time, si;
    cout<<"Enter the principal amount : ";
    cin>>principal;
    cout<<"Enter the rate of interest : ";
    cin>>rate;
    cout<<"Enter the time : ";
    cin>>time;
    si = (principal * rate * time)/100;
    cout<<"Simple Interest is : "<<si;


    return 0;
}