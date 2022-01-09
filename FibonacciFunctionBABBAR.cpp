// printing Fibonacci series using function
#include<iostream>

using namespace std;

int fibo(int n){
    int a=0, b=1, ans;
    for(int i=3; i<=n; i++){
         ans = a+b;
        a = b;
        b = ans;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = fibo(n);
    cout<<"Fibonacci series : "<<ans<<endl;
    return 0;
}