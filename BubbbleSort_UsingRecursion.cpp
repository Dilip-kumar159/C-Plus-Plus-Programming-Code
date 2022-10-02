// Bubble Sort Using Recursion
#include<iostream>

using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int s){

    print(arr,s);
    // base case
    if(s == 0 || s == 1)
    return;

    // First case solve
    for(int i=0; i<s-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // Recursive Call
    bubbleSort(arr,s-1);
   
}
int main()
{
    int arr[5] = {9,8,1,2,7};
    int s = 5;

    bubbleSort(arr,s);
    cout<<"After Sorting "<<endl;
    print(arr,s);
    return 0;
}