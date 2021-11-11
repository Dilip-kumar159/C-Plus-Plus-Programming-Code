// Insertion of an element in an array.
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
int insertion(int arr[], int size, int capacity, int index, int element)
{
    if(size >= capacity)
    {
        return -1;
    }
    for (int i = size-1 ; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
      arr[index] = element;
      return 1;
}
int main()
{
    int arr[100] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    // int index = 3, element = 20;
    cout<<"Before Insertion "<<endl;
    display(arr , size);
    insertion(arr, size, 100, 5, 900);
    size+=1;
    cout<<"After Insertion "<<endl;
    display(arr, size);
    return 0;
}