// Swap Alternative element in a given array
// example : arr[4]      -> 10 20 30 40 
// after swapalternative -> 20 10 40 30
#include<iostream>

using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternative(int arr[], int size){
    for (int i = 0; i < size; i+=2){
        if(i+1 < size){
            // swap(arr[i], arr[i+1]); -> pre-defined function
            int temp = arr[i]; // -> user-defined function
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
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
    
    swapAlternative(arr,size);
    printArray(arr,size);


    return 0;
}