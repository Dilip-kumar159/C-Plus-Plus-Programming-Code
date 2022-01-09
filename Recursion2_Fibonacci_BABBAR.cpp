// print Fibonacci series using Recursion
#include<iostream>

using namespace std;

int fibonacci(int n){
    // Base Case
    if(n == 0)
    return 0;

    if(n==1)
    return 1;

    // Recursive Realation
    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;
}
int main()
{
    int n;
    cout<<"Enter nth term : ";
    cin>>n;

    cout<<"nth term value : "<<fibonacci(n)<<endl;
    return 0;
}