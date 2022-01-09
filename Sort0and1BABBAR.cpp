// sort 0 and 1 in ascending order in a given array.
#include<iostream>

using namespace std;

 void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//  void sortZeroOne(int arr[], int n){
//     int left = 0;
//     int right = n-1;
//     while(left < right){
//         while(arr[left] == 0 && left < right){
//             left++;
//         }
//         while(arr[right] == 1 && left < right){
//             right--;
//         }
//         if(arr[left] == 1 && arr[right] == 0 && left < right ){
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// }

void sortZeroOne(int *arr, int n){
    int l = 0;
    int r = n - 1;
    while(l < r){
        if(arr[l] == 0){
            l++;
        }
        else if(arr[r] == 1){
            r--;
        }
        if(arr[l] == 1 && arr[r] == 0){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    int size; 
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements 0's and 1's in an array"<<endl;
    int arr[50];
    for(int i=0; i<size; i++){ 
        cin>>arr[i];
    }
    // cout<<"Before Sorting"<<endl;
    // printArray(arr,size);
    cout<<"After Sorting"<<endl;
    sortZeroOne(arr,size);
    printArray(arr,size);
    return 0;
}