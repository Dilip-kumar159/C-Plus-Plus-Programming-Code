// pattern printing
//      *
//     ***
//    *****
//   *******
//  *********

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row<=num){
        int space = num - row;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        int start = row - 1;
        while(start){
            cout<<"*";
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}