// Selection sorting 
// Time Complexity --> Best Case : O(n^2).
//                     Worst Case : O(n^2).
// Space Complexity --> O(1) = Constant.
#include<iostream>

using namespace std;

void selectionSorting(int arr[], int size){
     
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++ ){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // swap(arr[minIndex] , arr[i]);

          int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
    }
}

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int arr[] = {8,22,7,9,31,5,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting : ";
    printArray(arr,n);
     
    cout<<"After sorting : ";
    selectionSorting(arr,n);
    printArray(arr,n);

    
    
    return 0;
}