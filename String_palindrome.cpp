//  Checking if the given string is palindrome or not .
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin, s);
    int low=0;
    int high = s.size() - 1;
    int flag=0;
    while (low < high)
    {
        if (s[low]!=s[high])
        {
            flag=1;
            break;
        }
        low++;
        high--;
        
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