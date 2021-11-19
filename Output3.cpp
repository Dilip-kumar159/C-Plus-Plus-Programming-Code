#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter the value : ";
    cin>>ch;
    // Capital A starts from 65 and ends in 90.
    // Small letter a starts from 97 and ends in 122.
    if(ch>='a' && ch<='z'){
        cout << "Lower Alphabetic Case";
    }
    else if (ch>='A' && ch<='Z'){
        cout << "Upper Alphabetic Case";
    }
    else if(ch>='0' && ch<='9'){
        cout << "This is a numeric value";
    }
    else{
        cout << "Invalid number";
    }
    
    return 0;
}