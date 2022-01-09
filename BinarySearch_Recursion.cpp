#include<iostream>

using namespace std;

void print(int *arr, int s, int e){

    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int *arr,int start,int end,int key){

    print(arr,start,end);
    // Base Condition
    if(start > end)
    return false;

    int mid = start + (end - start)/2;

    if(arr[mid] == key)
    return true;

    if(arr[mid] < key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     int size = 10;
     int key = 0;
     int start = 0, end = size -1;
     bool ans = binarySearch(arr,start,end,key);

    cout<<"Element to be search is : "<<key<<endl;
    

    if(ans){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}