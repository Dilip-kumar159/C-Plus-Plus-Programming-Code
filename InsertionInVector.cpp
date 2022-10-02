#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr{3,2,5};

    cout<<"Before Insertion "<<endl;

    for(int ele : arr){
        cout<<ele<<" ";
    }cout<<endl;

    auto it = arr.begin() + 0;

    auto iter = arr.insert(it, 100);

    cout<<"After Insertion "<<endl;

    for(auto ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}