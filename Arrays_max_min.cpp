// Finding the maximum and minimum element in an array.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the elements in an array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0]; 
    int min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(max < arr[i])
        max=arr[i];
        if(min > arr[i])
          min=arr[i];
    }
    cout<<"Maximum element in an array is "<<max<<endl;
    cout<<"Minimum element in an array is "<<min;

    return 0;
}