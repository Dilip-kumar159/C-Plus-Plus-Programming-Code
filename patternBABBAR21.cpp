// pattern printing
//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row<=num){

        // first print space
        int space = num - row;
        while(space){
            cout<<" ";
            space--;
        }

        // second print column triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }

        // third print andother triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}