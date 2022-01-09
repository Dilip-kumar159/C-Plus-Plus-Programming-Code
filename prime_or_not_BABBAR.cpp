// prime or not 
#include<iostream>

using namespace std;

int main()
{
    int n = 10;
    bool isprime = 1;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }

        if(isprime == 0){
            cout<<"Not a prime Number";
        }
        else{
            cout<<"It is a prime Number"<<endl;
        }
    return 0;
}