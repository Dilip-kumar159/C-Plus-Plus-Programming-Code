#include<iostream>

using namespace std;

int main(){

    int n; 
    cout<<"Enter the Number : ";
    cin>> n;

    for(int i=0; i<n; i++){

        int space = n - i;

        for(int k = 0; k < space; k++) {

            cout<<" ";
        }

        for(int j = 0; j<=i; j++){

            cout<<"*";
        }

        for(int k=0; k<i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}