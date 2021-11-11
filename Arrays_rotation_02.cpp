// Arrays rotation of element in an array.
// By naive method , optimization method is already done in 1.
#include<iostream>

using namespace std;
    void rotate(int arr[], int n, int k)
    {
        for (int i = 0; i < k; i++)
        {
            int temp = arr[0];
            for (int j = 0; j < n-1 ; j++)
            {
                arr[j] = arr[j+1];
            }
            
            arr[n-1] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
int main()
{
    int n; 
    cout<<"Enter the number of elements in an array "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Till which index you want to rotate "<<endl;
    cin>>k;
    cout<<"After rotation of elements in an array "<<endl;
    rotate(arr, n, k);
    
    return 0;
}