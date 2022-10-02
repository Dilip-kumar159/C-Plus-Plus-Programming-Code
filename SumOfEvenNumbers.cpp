// Program to demonstrate the Sum of all even numbers in given N.
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the N value : ";
    cin>>n;

    int i = 1, sum = 0;

    while(i <= n){
        if(i % 2 == 0){
            sum += i;
        }
        i = i+1;
    }

    cout<<"The sum of All Even Number is : "<<sum<<endl;

    return 0;
}  