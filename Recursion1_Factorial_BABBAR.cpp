// Recursion for factorial of a given number

#include<iostream>

using namespace std;

int factorial(int n){
    // Base condition
    if(n == 0)
    return 1;
    
    // Recursive Relation
    return n * factorial(n-1);
}
int main()
{
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
    return 0;
}