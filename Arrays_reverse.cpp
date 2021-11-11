// Reversing the array elements.
#include<iostream>

using namespace std;
    // Optimize method for reversing the array. 
    void reverse(int arr[], int start, int end, int size)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        cout<<"Elements after reversing "<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
int main()
{
    int n;
    cout<<"Enter the number elements of an array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Elements before reversing "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr, 0, n-1, n);
    return 0;
}