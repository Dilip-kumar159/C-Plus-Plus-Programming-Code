// Output Questions 
#include<iostream>

using namespace std;

// void update(int a){
//     a = a/2;
// }

// int update(int a){
//     a = a - 5;
//     return a;
// }

int update(int a){
    int ans = a * a;
    return ans;
}

int main()
{
    // // 1. Question
    // int a = 10;
    // update(a);
    // cout<<a<<endl;


    // // 2. Question
    // int a = 15;
    // update(a);
    // cout<<a<<endl;

    // 3. Question
    int a = 14;
    a = update(a);
    cout<<a<<endl;
    return 0;
}