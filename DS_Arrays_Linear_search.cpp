// Linear searching in an array.
#include<iostream>

using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int linear_search(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
        return -1;
    
}

int main()
{
    int n;
    cout<<"Enter the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
     int element;
     cout<<"Element to be searched : ";
     cin>>element;
    display(arr , n);
    int search_index = linear_search(arr, n, element);
    cout<<"The element "<<element<<" was found at the index "<<search_index<<endl;
    return 0;
}