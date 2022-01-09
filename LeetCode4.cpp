// Complement of Base 10 digit
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the integer number : ";
    cin>>n;
    int a = n;
    int bound = 0;
    if(n==0){
        cout<<"Complement of "<<n<<" is "<<"1"<<endl;
    }
    while(a!=0){
        bound = (bound<<1) | 1;
        a = a>>1;
    }
    int ans = (~n)&bound;
    if(n!=0){
    cout<<"Complement of "<<n<<" is "<<ans<<endl;
    }
    return 0;
}