// Intiailizing entire array with any value .
#include<iostream>

using namespace std;

void update(int arr[], int n){

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[10] = {0}; // here entire array filled with zero.
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    update(arr,10);

    int first[10] = {1}; // here only first index prints 1 rest all zero.
    // for(int i=0; i<10; i++){
    //     cout<<first[i]<<" ";
    // }
    // cout<<endl;
    update(first,10);

    int second[10];
    fill_n(second,10,1); // inoreder to add entire array with value 1 we use fill_n().
    // for(int i=0; i<10; i++){
    //     cout<<second[i]<<" ";
    // }
    update(second,10);
    return 0;
}