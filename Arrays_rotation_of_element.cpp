// Rotating array element from left .
#include<iostream>

using namespace std;
        // Optimize method of rotating the array.
    void rotate_array(int arr[], int n, int k)
    {
        // Storing the 1st Kth element in temproary memory.
        int temp[k];
        for (int i = 0; i < k; i++)
        {
            temp[i]=arr[i];
        }
        // Shifting the remaining elements.
        for (int i = k; i < n; i++)
        {
            arr[i-k] = arr[i];
        }
        // Storing back the remaning elements in array.
        for (int i = 0; i < k; i++)
        {
            arr[n-k+i] = temp[i];
        }
        // Printing the array.
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }

int main()
{
    int n;
    cout<<"Enter the number of array elements "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Till which index you want to rotate the array "<<endl;
    cin>>k;
    rotate_array(arr, n, k);
    return 0;
}