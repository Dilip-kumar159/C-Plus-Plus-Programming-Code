#include<iostream>

using namespace std;

void printArray(int *arr, int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort012(int *arr, int n){
    int low = 0; 
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
     int size; 
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements 0's 1's ans 2's in an array"<<endl;
    int arr[50];
    for(int i=0; i<size; i++){ 
        cin>>arr[i];
    }

    cout<<"After Sorting"<<endl;
    sort012(arr,size);
    printArray(arr,size);

    return 0;
}