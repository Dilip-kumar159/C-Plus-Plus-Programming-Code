#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the Number of Lines -> ";
    cin>>n;
    
    for(int i=1; i<=n; i++){

        int space = n - i;
        for(int k=1; k<=space; k++){
            cout<<" ";
        }
        
        int no_of_character = 2*i-1;
                
        for(int j=1; j<=no_of_character; j++){
            char ch = 'A' + j - 1;
            cout<<(char)(ch);
        }
        cout<<endl;
    }
    return 0;
}