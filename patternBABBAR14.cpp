// pattern printing
// A 
// A B
// A B C 
// A B C D

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row<=num){
        int col = 1;
        while(col<=row){
            char c = 'A'+col-1;
            cout<<c<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}