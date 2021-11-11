// Comparing two strings
#include<iostream>
#include<cstring> 
using namespace std;

int main()
{
    // There are three types to compare a string
    // 1).strcmp() method
    // 2).compare() method
    // 3).Relational Operators

    // 1).strcmp() method

    char s1[20] = "Coding";
    char s2[20] = "Ninjas!";
    int res = strcmp(s1,s2);
    int res1 = strcmp(s2,s1);
    cout<<res<<endl;
    cout<<res1<<endl;

    // 2).compare() method

    string str1 = "Coding";
    string str2 = "Ninjas!";
    string str3 = "Coding";
    int res4 = str1.compare(str2);
    int res5 = str2.compare(str1);
    int res6 = str3.compare(str1);
    cout<<res4<<endl;
    cout<<res5<<endl;
    cout<<res6<<endl;
    return 0;
}