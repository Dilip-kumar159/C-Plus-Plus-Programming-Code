// pattern printing
// A 
// B C
// C D E 
// D E F G

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
            char a = 'A'+col+row-2;
            cout<<a<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}