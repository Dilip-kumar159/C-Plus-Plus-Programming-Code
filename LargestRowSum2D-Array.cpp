// printing the largest Row Wise Sum in 2D-Array.
#include<iostream>

using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int maxi = INT32_MIN;
    int rowIndex = -1;

    for(int i=0; i<row; i++){
        int sum=0; 
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
            if(sum > maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
   cout<<"The Sum of maximum row wise is : "<<maxi<<endl;
    return rowIndex;
}

int largestColSum(int arr[][3], int row, int col){

    int maxi = INT32_MIN;
    int colIndex = -1;

    for(int i=0; i<row; i++){
        int sum=0; 
        for(int j=0; j<col; j++){
            sum += arr[j][i];
            if(sum > maxi){
                maxi = sum;
                colIndex = i;
            }
        }
    }
   cout<<"The Sum of maximum col wise is : "<<maxi<<endl;
    return colIndex;
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

    int num = largestRowSum(arr,3,3);
    cout<<"The index of the maximum Row wise sum is : "<<num<<endl;

    int num1 = largestColSum(arr,3,3);
    cout<<"The index of the maximum Col wise sum is : "<<num1<<endl;

    return 0;
}