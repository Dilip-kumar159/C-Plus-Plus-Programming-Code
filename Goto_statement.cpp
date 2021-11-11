// Check the given number is even or odd.
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num%2==0)
        goto printeven;
    else
        goto printodd;
    
    printeven:
            cout<<"The number is even "<<endl;
    return 0;
    printodd:
            cout<<"The number is odd "<<endl;
    return 0;
}