// Revese a string Using Recursion
#include<iostream>

using namespace std;

void reverse(string &name, int s, int n){

    cout<<"Working of String : "<<name<<endl;
    // base case
    if(s>n)
    return;

    swap(name[s++] , name[n--]);
    // s++;
    // n--;

    // Recursive case
    reverse(name,s,n);

}
int main()
{
    string name;
    cin>>name;

    cout<<"String : "<<name<<endl;

    int n = name.length()-1;
     reverse(name,0,n);
    
    cout<<"Reversed String : "<<name<<endl;
    return 0;
}