#include<iostream>

using namespace std;

int main(){

   int num;
   cout<<"Enter the Number : "<<endl;
    cin>>num;
    // int row = 1;

    // while(row <= num){
    //     int space = num - row;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int col = 1;
    //     while(col<=row){
    //         cout<<"*";
    //         col++;
    //     }

    //     int start = row - 1;
    //     while(start){
    //         cout<<"*";
    //         start--;
    //     }

    //     cout<<endl;
    //     row++;
    // }


    for(int i=0; i<=num; i++){
        
        for(int j=0; j< num-i; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }

    return 0;
}