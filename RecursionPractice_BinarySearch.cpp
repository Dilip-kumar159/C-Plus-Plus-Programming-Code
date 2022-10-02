// Binary search using Recursion
#include<iostream>

using namespace std;

bool binarySearch(int *arr, int s , int e, int k){

    // Base Case
    if(s > e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
       return binarySearch(arr,mid+1,e,k);
    }
    else{
      return binarySearch(arr,s,mid-1,k);
    } 
}
int main()
{
    int arr[8] = {2,3,4,5,6,7,18,29};
    int k = 29;
    int s = 0; 
    int e = 7;

    bool isPresent = binarySearch(arr,s,e,k);

    if(isPresent){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array "<<endl;
    }
    return 0;
}