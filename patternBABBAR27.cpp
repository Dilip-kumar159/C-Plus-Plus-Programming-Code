// pattern printing
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int start = 1;
        while(start<=n-row+1){
            cout<<start<<" ";
            start++;
        }
        int star = 1;
        while(star<=row-1){
            cout<<"*"<<" ";
            star++;
        }
        int rightstar = 1;
        while(rightstar<=row-1){
            cout<<"*"<<" ";
            rightstar++;
        }
        int val = n-row+1;
        int col = 1;
        while(col<=n-row+1){
            cout<<val<<" ";
            val--;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}