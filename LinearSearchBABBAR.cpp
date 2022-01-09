// Linear Search to find a element in an array.
#include<iostream>

using namespace std;
bool search(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[50];
    int i;
    for( i=0; i<size; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter which element to find : ";
    cin>>element;

    bool found = search(arr,size,element);

    if(found){
        cout<<"Element is present in an array "<<endl;
    }
    else{
        cout<<"Element is not present in an array"<<endl;
    }

    return 0;
}