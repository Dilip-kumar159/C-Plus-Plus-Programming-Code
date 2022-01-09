// linear Search in 2D-Array 
#include<iostream>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];

    cout<<"Enter the elements in an 2D-Arrays : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The elements are : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter which element is to search : ";
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"The element "<<target<<" is found "<<endl;
    }
    else{
        cout<<"The element "<<target<<" is not found "<<endl;
    }
    return 0;
}