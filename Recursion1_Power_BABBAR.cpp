// Recursion for finding the power of 2
#include<iostream>

using namespace std;
int power(int n){
    // Base Condition
    if(n==0)
    return 1;
    // Recursive Relation
    return 2 * power(n-1);
}
int main()
{
    int n; 
    cin>>n;

    int ans = power(n);

    cout<<"2^"<<n<<" : "<<ans<<endl;

    return 0;
}