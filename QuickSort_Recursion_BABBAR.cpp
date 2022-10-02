// Quick Sort Algorithm 
#include<iostream>

using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int *arr, int s, int e){

    // pivot is first element of the array
    int pivot = arr[s];

    int count = 0;
    // loop for checking how many elements are < than the pivot
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    
    // placing the pivot in correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // condition check for less than pivotIndex and greater
    int i=s, j=e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivotIndex){
            i++;
        }
        while(arr[j] > pivotIndex){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
    
}
void quickSort(int *arr, int s, int e){

    print(arr,e);

    // Base case
    if(s >= e)
    return;

    // for parition
    int p = partition(arr, s, e);

    // Recursive call for left array
    quickSort(arr, s, p-1);

    // Recursive call for right array
    quickSort(arr, p+1, e);

}
int main()
{
    int arr[10] = {9,2,1,3,7,8,4,5,6,0};
    int n = 10;

    print(arr,n);
    quickSort(arr,0,n-1);
    print(arr,n);

    return 0;
}