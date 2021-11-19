// Check whether the given number is prime or not.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i==0){
            cout << "The number is not prime "<< i << endl;
        }
        else{
            cout << "The number is prime "<< i << endl;
        }
        i++;
    }
    return 0;
}