// Reversing the vector array  after m index 
#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> arr, int m){
    int start = m;
    int end = arr.size() - 1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    return arr;
}
void print(vector<int> arr){

    for(int index = 0; index < arr.size(); index++){
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr;
    int m = 3;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(390);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);

    cout<<"Before Reversing the vector array : ";
    print(arr);
    cout<<"After Revesing the vector array : ";
    vector<int> result = reverse(arr,m);
    print(result);
    return 0;
}