// Declaration and intialization of a string.
#include<iostream>

using namespace std;

int main()
{
    // There are two ways to create a stings.
    // 1) By creating character arrays and treating them as a string 
    // 2) By creating a string object

    // 1).
    char str[6]={'d','i','l','i','p'};
    cout<<"The string is : "<<str<<endl;

   // The above statement can also be written as:
   // char str[] = "dilip";

    char str1[50] = "Welcome to c++ programing ";
    cout<<str1<<endl;

    // // Taking user input
    // char str2[50];
    // cout<<"The string is : "<<endl;
    // // cin>>str2;
    // cin.get(str2,50); // now the output will be displayed.
    // cout<<"The entered string is : "<<str2<<endl;
 // Here if user gives the "welcome to" the output will be ,
 //  only it prints "Welcome" cin only takes until the character
 // is placed if there is space then it will ignore after the space.

    // 2).
    string s; // s is a string object.
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    s[5]='d';// It can change the character we can replace.
    cout<<"The string is : "<<s<<endl;
    cout<<"The string 5 index is "<<s[5]<<endl;
    // s[5] tells us the index 5 which character is stored.
    return 0;
}