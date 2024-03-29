// Power of Exponents using Recursion

#include<iostream>

using namespace std;

int power(int a,int b){

    // base case
    if(b==0)
    return 1;

    if(b==1)
    return a;

    // Recursive call
    int ans = power(a, b/2);

    // even case
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        //odd case
        return a * ans * ans;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;

    int ans = power(a,b);
    
    cout<<"Answer : "<<ans<<endl;

    return 0;
}