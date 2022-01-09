// 2D-Array creation and implementation.
#include<iostream>

using namespace std;

int main()
{
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
       int arr[2][2] = {{1,11},{2,22}};
    // int arr[3][4];
    // Taking input
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin>>arr[row][col];
    //     }
    // }
    // for printing output
    cout<<"Column Wise printing "<<endl;

    for(int col=0; col<2; col++){
        for(int row=0; row<2; row++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"row wise printing"<<endl;
    
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}