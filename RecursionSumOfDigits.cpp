// Finding Sum of Digits using Recursion
#include<iostream>

using namespace std;

// Trust the process
// Lets say the digit is 4293 
// for 4293 -> 429 + 3
// for 429 -> 42 + 9
// for 42 -> 4 + 2
// for 4 -> 0 + 4
// finally we do 4 + 2 + 9 + 3 = 18
// Resultant answer is 18.
// for any f(n) = f(n) + f(n-1 + n-2 + n-3 + n-4 + .... )
int digits(int n){

     if(n == 0){
         return 0;
     }
    int last_digit = n % 10;
    int small = n / 10; 
    return digits(small) + last_digit;
}
int main(){

    int n;
    cin>>n;

    cout<<digits(n);

    return 0;
}