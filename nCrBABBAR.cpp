// calculating nCr
#include<iostream>

using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int num = factorial(n);

    int denum = factorial(r) * factorial(n-r);

    int answer = num/denum;

    return answer;
}
int main()
{
    int n , r;
    cout<<"Enter the n value and r value : ";
    cin>>n>>r;   
    int ans = nCr(n,r);
    cout<<"nCr is : "<<ans<<endl;
    return 0;
}