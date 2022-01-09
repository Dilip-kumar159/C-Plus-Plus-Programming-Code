// counting the number of ones present in the given number using function.
#include<iostream>

using namespace std;

int setBits(int n){
    int count = 0;
    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
            n = n>>1;
    }
    return count;
}
int main()
{
    int num1, num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    int firstnum = setBits(num1);
    int secondnum = setBits(num2);
    cout<<"Total number of 1's : "<<firstnum + secondnum<<endl;
    return 0;
}