// pattern to print 
// 3 2 1 
// 3 2 1 
// 3 2 1 

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int row = 1;
    while(row <= num){
        int col =1;
        while(col <= num){
            cout<<(num-col+1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}