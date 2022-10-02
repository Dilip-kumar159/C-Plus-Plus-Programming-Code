#include<iostream>

using namespace std;
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int *arr, int n, int target){
    
     int start = target; 
    int end = n-1;
    
    while(start <= end){

        if(start == target){
            swap(arr[target++],arr[end--]);
        }
    }
}
int main()
{
    int arr[100];
	int n; 
	cin>>n;
	
	for(int i=0; i<n; i++){   
	    cin>>arr[i];
	}
	
	int target;
	cin>>target;

	print(arr,n);
	reverse(arr,n,target);
	print(arr,n);
    return 0;
}