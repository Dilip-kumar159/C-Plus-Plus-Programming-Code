// Implementation of Binary search.
#include<iostream>

using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int size, int key){
    int start = 0; 
    int end = size - 1;
   //int mid = (start + end)/2; // This is normal case 
    // if the integer size exceeds for eg: 2(31) - 1 for start and 2(31) - 1 for end,
    // then the integer size bound will be exceeds and gets the TLE error.
    // we can use this 
    int mid = start + (end - start)/2;  // This keeps the int value inside the range of it.
    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
    
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;


    int arr[50];
    cout<<"Enter the sorted elements in an array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    printArray(arr, size);

    int key;
    cout<<"Enter which element to be searched : ";
    cin>>key;

    int index = binarySearch(arr, size, key);
    cout<<"The element "<<key<<" is present in the index "<<index<<endl;

    return 0;
}