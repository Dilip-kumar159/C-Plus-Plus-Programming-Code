// pattern printing
// A B C
// D E F
// G H I 

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    char start = 'A';
    while(row<=num){
        int col = 1;
        while(col<=num){
            cout<<start<<" ";
            start++;    
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}   