// pattern printing
// A B C
// B C D 
// C D E

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row<=num){
        int col = 1;
        char ch = 'A'+row+col-2;
        while(col<=num){
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}