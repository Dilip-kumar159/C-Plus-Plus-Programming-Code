// checking whether the number is even or odd
#include<iostream>

using namespace std;
// 1 -> even
// 0 -> odd
bool isEven(int a){
    // odd if a and 1 is true then it is odd or else it is even.
    if(a&1){
        return 0;
    }
    return 1;
}
int main()
{
    int num; 
    cin>>num;
    if(isEven(num)){
        cout<<"The Number is Even"<<endl;
    }
    else{
        cout<<"The Number is Odd"<<endl;
    }
    return 0;
}