#include<iostream>

using namespace std;

int main()
{
    // question 1
    // for(int i = 0; i<=5; i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // question 2
    // for(int i = 0; i<=5; i--){
    //     cout<<i<<" ";
    //     i++;
    // }

    // question 3
    // for(int i = 0; i<=15; i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // question 4
    // for(int i = 0; i<5; i++){
    //     for(int j = i; j<=5; j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    // question 5
    // for(int i = 0; i<5; i++){
    //     for(int j = i; j<=5; j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    // Variables and Scopes
    int a = 3;
    cout<<a<<endl;
    if(true){
        int a = 5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
    return 0;
}