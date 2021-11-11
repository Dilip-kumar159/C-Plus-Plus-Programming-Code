// Counting the pairs in the given sum of array.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the element in an array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int count=0;
    // Consider all possible pairs and check their sum.
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                count++;
            }
            
        }
                
    }
    cout<<"Count of pairs are : "<<count;
    return 0;
}   