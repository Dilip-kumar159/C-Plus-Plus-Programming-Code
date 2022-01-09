// pattern printing
// A B C
// A B C
// A B C

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row<= num){
        int col = 1;
        while(col <= num){
            char h = 'A'+col-1;
            cout<<h<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}