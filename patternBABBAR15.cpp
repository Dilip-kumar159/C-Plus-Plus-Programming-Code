// pattern printing 
// A 
// B C
// D E F
// G H I J

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    char val = 'A';
    while(row<=num){
        int col = 1;
        while(col<=row){
            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}