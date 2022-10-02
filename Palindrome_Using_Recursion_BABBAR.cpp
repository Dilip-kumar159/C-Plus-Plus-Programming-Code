// check Palindrome using Recursion
#include<iostream>

using namespace std;

char check(char c){

    if(c >= 'a' && c <= 'z'){
        return c;
    }
    else{
        char ch = c - 'A' + 'a';
        return ch;
    }
}
bool checkPalindrome(string &name, int s, int e){
    //base case
    if(s>e)
    return true;

    if(check(name[s]) != check(name[e]))
    return false;

    // Recursive call
    return  checkPalindrome(name,s+1,e-1);
}
int main()
{
    string name;
    cin>>name;

    bool isPlaindrome = checkPalindrome(name,0,name.length()-1);

    if(isPlaindrome){
        cout<<"It is a palindrome "<<endl;
    }
    else{
        cout<<"It is not a palindrome "<<endl;
    }
    return 0;
}