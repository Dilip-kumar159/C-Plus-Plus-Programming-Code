// Creating Jagged Array
#include<iostream>

using namespace std;

int main()
{
    int row;
    cout<<"Enter the Number of rows : ";
    cin>>row;

    int *number = new int[row]; // For storing the no.of Columns

    int **arr = new int*[row]; 

    for(int i=0; i<row; i++){
            cout<<"Enter the Number of Columns in a row " <<i<<" : "; 
            cin>>number[i];
            arr[i] = new int[number[i]];
        }
    // Taking Input
    for(int i=0; i<row; i++){
        for(int j=0; j < number[i]; j++){
            cout<<"Row "<<i<<" , Col "<<i*number[i]+j<<" ,"<<"Enter value : ";
            cin>>arr[i][j];
        }
    }

    // Printing Ouput
    for(int i=0; i<row; i++){
        for(int j=0; j<number[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // For Deallocating the memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr[row];

    cout<<"Memory is Freed in Heap "<<endl;
    return 0;
}