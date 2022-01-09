// Finding GCD using Euclid's Algorithm 
// GCD -> Greatest Common Divisor or HCF -> Highest Common Factor
// Formula : gcd(a,b) = gcd(a-b,b)
// eg : gcd(72,24) = gcd(72 - 24, 24)
// = gcd(48,24) = gcd(48 - 24, 24)
// = gcd(24,24) = gcd(0,24) = so answer GCD is 24.

#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(a == 0)
    return b;

    if(b == 0)
    return a;

    while(a!=b){

        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a & b : ";
    cin>>a >> b;

    int ans = gcd(a,b);

    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<ans<<endl;
    
    return 0;
}