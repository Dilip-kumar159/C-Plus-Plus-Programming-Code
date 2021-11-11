// Checking the element is present or not in the given an array.
#include<iostream>

using namespace std;
    int search(int arr[],int n,int x)
    {
        for (int i = 0; i < n; i++)

            if (arr[i]==x)
               return i; 
        return -1;
    }
            
        
int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    // Inputing the array elements.
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;// For searching the element.
    cout<<"Enter which element to be searched in the array "<<endl;
    cin>>x;
    int result = search(arr, 5 , x);
    if(result==-1)
    {
        cout<<"The element is not present in this array";
    }
    else
    {
        cout<<"The element is present at the index "<<result;
    }
    return 0;
}
            
