// Total occurrence of the given element in an array.

#include<iostream>

using namespace std;
int firstOccurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int firstIndex = -1;

    while(start <= end){
        if(arr[mid] == key){
            firstIndex = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return firstIndex;
}

int lastOccurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int lastIndex = -1;

    while(start <= end){
        if(arr[mid] == key){
            lastIndex = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return lastIndex;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,6,6,6,6};
    int first = firstOccurrence(arr,10,6);
    int last = lastOccurrence(arr,10,6);

    int answer = (last - first) + 1;

     cout<<"The first Occurrence of the element 2 is at the index "<<first<<endl;
    cout<<endl;
    cout<<"The last Occurrence of the element 2 is at the index "<<last<<endl;
    cout<<endl;
    cout<<"The total Number of Occurrence of the element is : "<<answer<<endl;
    return 0;
}