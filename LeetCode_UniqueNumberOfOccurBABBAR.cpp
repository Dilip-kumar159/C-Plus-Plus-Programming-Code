// Unique number of occurence in an array
#include<iostream>

using namespace std;

bool uniqueNum(int *arr, int size){

    int count = 0;
    for(int i=0; i<size-1; i++){
        if(arr[i] == arr[i+1]){
            count++;
            cout<<"Count is : "<<count<<endl;
            return true;

        }
    }
    cout<<"element is not found "<<endl;
    return false;
}
int main()
{
    int arr[6] = {1,2,3,5,2,6};
    int size = 6;

    bool ans = uniqueNum(arr,size);

    if(ans){
        cout<<"Answer is : "<<ans<<endl;
    }
    else{
        cout<<"Answer is : "<<ans<<endl;
    }
    return 0;
} 