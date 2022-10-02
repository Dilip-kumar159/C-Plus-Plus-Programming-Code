// Some c++ STL Containers 
#include<iostream>
#include<array>

using namespace std;

// namespace dilip{
//     int val = 10;
//     char c = 'A';
// }
int main(){
    
    // int val;
    // cout<<dilip::val<<endl;
    // cout<<dilip::c;

    array<int, 5> arr = {10,20,30,40,50};
    // arr.fill(2);

    array<string, 6> s = {"Dilip"};
    // for each loop 
    for(auto c : s){
        cout<<c<<" ";
    }
    cout<<endl;

    cout<<"Front Element : "<<arr.front()<<endl;
    cout<<"Back Element : "<<arr.back()<<endl;
    cout<<"At the index 2 : "<<arr.at(2)<<endl;

    // For printing in straight order
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }  
    cout<<endl;

    // For printing in Reverse order
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout<<*it;
    }
    cout<<endl;

    return 0;
}