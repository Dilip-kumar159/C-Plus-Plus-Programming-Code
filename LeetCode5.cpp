// power of two

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = 1;
    for(int i = 0; i<=30; i++){
        if(ans == n){
            cout<<"TRUE";
        }
        if(ans < INT32_MAX/2){
            ans = ans * 2;
        }
    }
    
          return 0;
}