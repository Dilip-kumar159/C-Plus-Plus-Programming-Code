// Insertion sort Algorithm
// Time Complexity --> O(n^2) 
// Best Case --> O(n)
// Worst Case --> O(n^2)

#include<iostream>

using namespace std;

void insertionSort(int arr[], int n){
        int i = 1;
        while(i<n){
            int temp = arr[i];
            int j = i-1;
            while(j>=0){
                if(arr[j] > temp){
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
                j--;
            }
            i++;
            arr[j+1] = temp;
        }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = 9;
    cout<<"Before Sorting : ";
    printArray(arr,9);
    cout<<"After Sorting : ";
    insertionSort(arr,9);
    printArray(arr,9);
    return 0;
}