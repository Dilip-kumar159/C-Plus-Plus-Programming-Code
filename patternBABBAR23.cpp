// pattern printing
// 1 1 1 1 
//   2 2 2 
//     3 3 
//       4

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = 1;
        while(space<=row - 1){
            cout<<" ";
            space++;
        }
        int col = 1;
        while(col<=n-row+1){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}