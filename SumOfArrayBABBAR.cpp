// print the sum of all the elements in an array.
#include<iostream>

using namespace std;

int sum(int a[], int n){

    int sum = 0;

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
        sum = a[i]+sum;
    }
    return sum;
}
int main()
{
    int size;
    cin>>size;

    int arr[40];
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl<<"Printing the array "<<endl<<endl;

    int ans = sum(arr,size);

    cout<<endl<<"The sum of array is : "<<ans<<endl;
    return 0;
}