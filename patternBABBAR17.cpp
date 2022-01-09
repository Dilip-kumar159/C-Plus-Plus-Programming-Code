// pattern printing 
// D 
// C D 
// B C D
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
            char c = 'A'+num-row;
        while(col<=row){
            cout<<c<<" ";
            c++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}