// pattern printing
// A 
// B B 
// C C C
// D D D D

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
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}