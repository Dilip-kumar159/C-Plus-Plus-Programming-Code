// pattern to print 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row <= num){
        int col = 1;
        while(col <= num){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}