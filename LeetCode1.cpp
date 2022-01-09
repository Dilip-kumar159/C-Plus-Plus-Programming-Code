// Given n number , find out the product and sum of the number and show the output 
// of subtracting product and sum.
#include<iostream>

using namespace std;

int main()
{
    int n = 234;
    int product = 1;
    int sum = 0;
    while (n!=0)
    {
        int digit = n%10;
        product *= digit;
        sum += digit;

        n = n/10;
    }
    int answer = product - sum;
    cout<<answer;
    return 0;
}