    // Printing in the Reverse order  
#include<iostream>

using namespace std;

int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100}; 
    cout<<"Before reversing the numbers "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    cout<<endl;

    cout<<"After reversing the numbers "<<endl;
    for(int i=9; i>=0; i--)
    {
        cout<<" "<<a[i];
    }

    return 0;
}