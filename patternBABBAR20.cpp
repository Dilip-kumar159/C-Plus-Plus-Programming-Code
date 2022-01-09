// pattern printing
// * * * *
//   * * *
//     * *
//       *

#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int row = 1;
    while(row<=num){
        int col = 1;
            int space = 1;
            while(space <= row - 1){
                cout<<" ";
                space++;
            }
            while (col<=num-row+1){
                cout<<"*";
                col++;
            }
        cout<<endl;
        row++;
    }



    // {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row<=num){
//         int col = 1;
//         while(col<=num){
//             if(col>=row){
//             cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
    return 0;
}