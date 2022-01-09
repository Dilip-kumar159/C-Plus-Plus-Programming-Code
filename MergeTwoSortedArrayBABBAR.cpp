// Merge two sorted array and store the array in the new array.
#include<iostream>

using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0, j=0,  k=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];

        }
        else{// arr2[j] > arr1[i]
            arr3[k++] = arr2[j++];
            
        }
    }

    while(i<n){
        arr3[k++] = arr1[i++];
        
    }
    while(j<m){
        arr3[k++] = arr2[j++];
       
    }
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[7] = {2,4,8,10,18,24,89};
    int arr2[4] = {1,3,15,29};
    int arr3[11] = {0};

    int n = 7;
    int m = 4;
    int k = 11;
    cout<<"First Array : ";
    print(arr1,n);

    cout<<"Second Array : ";
    print(arr2,m);

    cout<<"After Merging the two sorted array "<<endl;
    merge(arr1,n,arr2,m,arr3);
    print(arr3,k);

    return 0;
}