// Gcd of two Numbers
#include<iostream>

using namespace std;

int main(){

    int a, b;
    cout<<"Enter two Numbers : ";
    cin>>a>>b;

    while(b != 0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }

    cout<<"The GCD of two Numbers is "<<a<<endl;

    return 0;
}