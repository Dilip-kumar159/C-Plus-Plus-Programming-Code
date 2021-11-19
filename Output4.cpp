// print the sum of all even numbers.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0; 
    int i = 1;
    while (i<=n){
        if (i%2==0){
           sum = sum + i;
        }
        i++;
    }
    cout << "The sum of all even number is : "<< sum << endl;
    return 0;
}