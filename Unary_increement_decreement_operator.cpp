#include<iostream>

using namespace std;

int main()
{
    int num = 10;
    cout<<"Post-increement operator "<<num++<<endl;
    // // Num is 10,after post increement the number is 11.
    cout<<"Pre-increement operator "<<++num<<endl;
    // // Num is 11 , after becoming 12 it will print.

    cout<<"Post-decreement operator "<<num--<<endl;
    cout<<"Pre-decreement operator "<<--num<<endl;
    
    return 0;
}