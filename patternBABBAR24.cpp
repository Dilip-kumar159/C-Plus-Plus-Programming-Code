// pattern printing
//   1
//  22
// 333
//4444

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = 1;
        while(space<=n-row){
            cout<<" ";
            space++;
        }
        int col = 1;
        while(col<=row){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}