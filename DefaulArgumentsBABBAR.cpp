#include<iostream>

using namespace std;

void print(int *arr, int n, int start = 0){

    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size = 5;
    int arr[] = {1,3,4,8,9};

    print(arr,size); // without giving start parameter so by default it takes 0.

    print(arr,size,2);// now the array index start from 2.

    print(arr,size,3);
    return 0;
}