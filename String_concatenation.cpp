// Concatenating the string (means adding or joining two string)
#include<iostream>
#include<cstring> // scat() this is very important header file.

using namespace std;
    // There are various ways to concatenate strings,
    //  and they are as follows:

    //   1).  ‘+’ Operator
    //   2).  strcat() method
    //   3).  append() method

int main()
{
    // 1).   ‘+’ Operator
    string str1= "Welcome to C++ Programming ";
    string str2= "Dilip";
    cout<<"Concatenated strings are : ";
    str1 = str1 + str2;
    cout<<str1<<endl;

    
    //   2).  strcat() method

    char s1[40]= "I already finished ";
    char s2[40]= "C programming ";
    cout<<"Concatenated strings are : ";
    strcat(s1, s2);
    cout<<s1<<endl;

    //   3).  append() method
    string st1= "I'm focusing now on ";
    string st2= "Data Structure ";
    cout<<"Concatenated strings are : ";
    st1.append(st2);
    cout<<st1<<endl;

  
    return 0;
}