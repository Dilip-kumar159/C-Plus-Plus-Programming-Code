// First and Last Occurence of a given number in a sorted array.
#include<iostream>

using namespace std;

int firstOccurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
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
    return ans;
}

int lastOccurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
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
    return ans;
}
int main()
{
    int even[10] = {2,2,4,5,5,75,75,75,70,90};
    int leftMostIndex = firstOccurrence(even,10,2);
    int rightMostIndex = lastOccurrence(even,10,2);

    cout<<"The first Occurrence of the element 2 is at the index "<<leftMostIndex <<endl;
    cout<<endl;
    cout<<"The last Occurrence of the element 2 is at the index "<<rightMostIndex <<endl;
    return 0;
}