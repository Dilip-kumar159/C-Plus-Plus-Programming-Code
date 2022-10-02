//  Checking if the given string is palindrome or not .
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin, s);
    int start=0;
    int end = s.size() - 1;
    int flag=0;
    while (start < end)
    {
        if (s[start]!=s[end])
        {
            flag=1;
            break;
        }
        start++;
        end--;
        
    }
    if (flag==0)
    {
        cout<<"Given stirng is Palindrome"<<endl;
    }
    else
    {

        cout<<"Given stirng is not Palindrome"<<endl;
    }
    
    
    return 0;
}