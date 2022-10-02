// Pattern Printing
#include<iostream>

using namespace std;

int main()
{
    int n; 
    cin>>n;

    int row = 1;
    
    while(row <= n){

        int space = 1;
        while(space <= n - row){
            cout<<" ";
            space++;
        }

        int col = 1;
        while(col <= row - 1){
            char ch = 'B';
            cout<<ch;
            col++;
        }

        int right = 1;
        char c = 'A';
        while(right <= row ){
            cout<<c;
            c = 'B';
            right++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}