// Deleting an element in an array.
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
void deletion(int arr[], int size, int index)
{
    for(int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100] = {100,90,80,70,60,50,40,30,20,10};
    int size = 10,  index = 4;
    cout<<"Before deletion "<<endl;
    display(arr, size);
    cout<<"size : "<<size<<endl;
    deletion(arr,size,index);
    size-=1;
    cout<<"After deletion "<<endl;
    display(arr, size);
    cout<<"size : "<<size<<endl;
    return 0;
}