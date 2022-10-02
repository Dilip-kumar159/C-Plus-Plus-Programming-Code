// Printing sum of numbers using Recursion
#include<iostream>

using namespace std;

// Trusting the function
// Suppose the n is 4 for that 4 + 3 + 2 + 1 = 10
// for 'n' I can say (n-1) + (n-2) + ... 1.
int printSum(int n){
    
    // Base Case
    if(n == 0){
        return 0;
    }
    cout<<n<<" ";
    int rightPart =  printSum(n-1);
    return rightPart + n;
}
int main(){

    int n;
    cin>>n;
   int ans = printSum(n);
   cout<<endl<<"Sum of First "<<n<<" digits is : "<<ans<<endl;

    return 0;
}