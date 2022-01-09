// Find a pivot in an array.
// pivot element is basically it is a sorted and rotated array,
// where the lowest element is the pivot element.

#include<iostream>

using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{ // this is arr[mid] <= arr[0]
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main()
{
    int arr[8] = {3,5,7,8,9,10,1,2};

    int pivot = getPivot(arr,8);
    cout<<"The pivot index is : "<<pivot<<endl;

    return 0;
}