// pattern printing
// 1 2 3 
// 4 5 6 
// 7 8 9

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int count = 1;
    int row = 1;
    while(row <= num){
        int col = 1;
        while(col <= num){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}