// pattern printing
// *
// * * 
// * * *
// * * * *

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row <= num){
        int col = 1;
        while(col <= row){
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}