// Bubble sort 
// Time Complexity --> Best Case : O(n). Optimized 
//                     Worst Case : O(n^2).
// Space Complexity --> O(1) = Constant.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){

        bool swapped = false;

        for(int j=0; j<n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
                swapped = true;
            }     
       }
        if(swapped == true)
            break;
    }
}
int main()
{
    int arr[] = {8,22,7,9,31,5,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting : ";
    printArray(arr,n);

     bubbleSort(arr,n);
    cout<<"Sorted array : ";
    printArray(arr,n);
    
    return 0;
}