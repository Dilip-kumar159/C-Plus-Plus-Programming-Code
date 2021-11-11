// Binary search 
#include<iostream>

using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binary_search(int arr[], int size, int element)
{
    int low=0, mid, high = size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    int element = 50;
    display(arr,size);
    int search_index = binary_search(arr, size, element);
    cout<<"The element "<<element<<" was found at the index "<<search_index<<endl;

    return 0;
}