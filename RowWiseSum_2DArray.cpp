// Printing the row wise sum in 2D-Array.
#include<iostream>

using namespace std;

void printRowSum(int arr[][3], int row, int col){

    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

}

void printColSum(int arr[][3], int row, int col){

    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

}
int main()
{
    int arr[3][3];
    cout<<"Enter the elements in an array : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Row Wise sum is : ";
    printRowSum(arr,3,3);

    cout<<"Column Wise sum is : ";
    printColSum(arr,3,3);

    return 0;
}