#include<iostream>

using namespace std;

bool isSorted(int *arr, int size){

    // Base Condition
    if(size == 0 || size == 1)
    return true;

    if(arr[0] > arr[1])
    return false;

    // processing and Recursive Call
    bool reaminingPart = isSorted(arr+1, size-1);
    return reaminingPart;

}
int main()
{
    int arr[5] = {1,2,8,9,20};
    int size = 5;

    bool ans = isSorted(arr,size);
    
    if(ans){
        cout<<"Array is Sorted "<<endl;
    }
    else{
        cout<<"Array is not Sorted "<<endl;
    }

    return 0;
}