// Wave Print in 2D-Array 
#include<iostream>

using namespace std;

void printArray(int arr[][10], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// function for Wave Print 
void wavePrint(int arr[][10], int row, int col){

        for(int j=0; j<col; col++){
            if(col%2==0){
                for(int i=0; i<row; i++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else{
                for(int i=row-1; i>=0; i--){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
}
int main()
{
    int arr[10][10];
    int row ;
    cout<<"Enter the number of rows : ";
    cin>>row;

    int col;
    cout<<"Enter the number of columns : ";
    cin>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the 2D-Array"<<endl;
    printArray(arr,row,col);

    cout<<"Printing In Wave Form "<<endl;
    wavePrint(arr,row,col);

    return 0;
}