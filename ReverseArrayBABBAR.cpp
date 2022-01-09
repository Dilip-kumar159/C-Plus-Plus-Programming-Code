// Reversing a given array 
#include<iostream>

using namespace std;
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start<=end){
        //  int temp = arr[start];
        //  arr[start] = arr[end]; this is user-defined function.
        //  arr[end] = temp;

         swap(arr[start], arr[end]); // this pre bulit function.
         start++;
         end--;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[50];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before Reversing the elements in an array "<<endl;
    printArray(arr,size);
    cout<<"After Reversing the elements in an array "<<endl;
    reverse(arr,size);
    printArray(arr,size);

    
    return 0;
}