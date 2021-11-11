#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {10,240,700,60,50,350,40,90};
    int n=8;
    // before sorting into ascending order
    cout<<"Before sorted array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    // After sorting into ascending into order
    sort(arr,arr + n);
    cout<<"Ascending order"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    sort(arr,arr + n, greater <int> ());
    cout<<"Descending order "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}