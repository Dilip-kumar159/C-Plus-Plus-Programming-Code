// Pattern Printing
// 1
// ##
// 234
// ####
// 56789
#include<iostream>

using namespace std;

int main()
{
    int n; 
    cin>>n;
    int count = 1;

    for(int row = 1; row <=n; row++){

        if(row % 2 == 0){
            for(int col = 1; col <= row; col++){
                cout<<"#";
            }
        }
        else{
            for(int col = 1; col<=row; col++){
                cout<<count;
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}