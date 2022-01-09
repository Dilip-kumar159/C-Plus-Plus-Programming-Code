// Reverse an given integer.

#include<iostream>

// Reversing a integer number.
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Integer : ";
    cin>>n;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        if(ans > INT32_MAX || ans < INT32_MIN){
            cout<<"Answer : "<<ans<<endl;
        }

        ans = (ans * 10) + digit; // 40 * 10 + 5 = 45
        n = n/10;
    }
    cout<<"Reverse Integer is : "<<ans<<endl;
    return 0;
}