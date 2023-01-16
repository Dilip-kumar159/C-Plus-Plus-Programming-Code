#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the Number of Lines -> ";
    cin>>n;
    
    // Upper Triangle 
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


    // Lower Triangle
    for(int i=n+1; i<=2*n-1; i++){

        int space = i - n;

        for(int k=1; k<=space; k++){
            cout<<" ";
        }

        int no_of_char = 2 * (2*n-i)-1;

            char ch = 'A' + 1 - 1;
        for(int j=1; j<=no_of_char; j++){
            char ch = 'A' + j - 1;
            cout<<(char)(ch);
        }
        cout<<endl;
    }
    return 0;
}