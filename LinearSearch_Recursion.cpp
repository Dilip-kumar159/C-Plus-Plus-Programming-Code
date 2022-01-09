#include<iostream>

using namespace std;

void print(int *arr,int size){

    cout<<"Size of the array : "<<size<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int size, int k){

    print(arr,size);
    // Base condition
    if(size == 0)
    return false;

    if(arr[0] == k)
    return true;

    bool remainingPart = linearSearch(arr+1,size-1,k);
    return remainingPart;
}
int main()
{
     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     int size = 10;
     int key = 8;

    bool ans = linearSearch(arr,size,key);

    cout<<"Element to be search is : "<<key<<endl;
    

    if(ans){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}