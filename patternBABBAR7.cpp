// pattern printing 
// 1 
// 2 3 
// 3 4 5
// 4 5 6 7

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row <= num){
        int val = row;
        int col = 1;
        while(col <= row){
            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}   