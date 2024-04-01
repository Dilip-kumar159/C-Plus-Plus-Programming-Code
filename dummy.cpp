#include<iostream>

using namespace std;

int main(){

    // int p = 5;
    // float q;

    // cout<<sizeof(++p + q);
    // // cout<<a;

    // int num = 5;

    // int *p = &num;

    // int *pi = static_cast<int*>(p);

    // cout<<*pi<<endl;

    // int x = 4, y = 0;

    // while(x >= 0){

    //     x--;
    //     y++;

    //     if(x == y) continue;

    //     else 
    //         cout<<"x -> "<<x<<" y -> "<<y<<endl;

    // try{
    //     try{
    //         throw 20;
    //     }
    //     catch(int e){
    //         cout<<"Hello India\n";
    //         throw;
    //     }
    // }
    // catch(int n){
    //     cout<<"Hello World"<<endl;
    // }

    int x = 5;

    auto check = [=](){
        x = 10;
    }
    check();
    cout<<"Value of x "<<x<<endl;
    
    return 0;
}