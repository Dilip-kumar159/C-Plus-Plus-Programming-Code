// Creating Dynamic Memeory Allocation

#include<iostream>

using namespace std;

int main()
{   
    int row; 
    cin>>row;

    int col;
    cin>>col;

    // creating a 2D-array Dynamically
    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // Taking INput
    cout<<"Enter the Input Elements : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // Taking Output
    cout<<"Displaying the Output : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deleting the array in Heap
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr[row];

    cout<<"The Memory is released in Heap"<<endl;
    return 0;
}