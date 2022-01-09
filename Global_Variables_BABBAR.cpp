// Global variables are Bad practice because where ever the value changes,
// it affects where it is mentioned.

#include<iostream>

using namespace std;
int score = 99;

void func(int i){
    i = i+100;
    cout<<i<<endl;
    score++;
    cout<<"Score Value in func() : "<<score<<endl;
}
int main()
{
    int a = 10; // 'a' is a local variable once main function is out of range then 'a' also not exist.
    {
        int a = 11; 
        cout<<a<<endl;
    }
    cout<<a<<endl;
    func(a);
    cout<<"AFTER func() "<<a<<endl;

    cout<<"Score Value in main() : "<<score<<endl;

    return 0;
}