// Creation of array and Traversal of an array.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int size = 10;
    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    // Displaying the elements in an array 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}