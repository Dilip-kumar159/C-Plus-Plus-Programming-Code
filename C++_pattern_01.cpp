#include<iostream>

using namespace std;

int main()
{
    // *
    // * * 
    // * * *
    // * * * *
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
    {
        cout<<"  "<<i;
    }
    cout<<endl;
    }
    cout<<endl;

        // * * * *
        // * * *
        // * * 
        // * 
    for(int k=1; k<5; k++)
    {
        for(int l=k; l<5; l++)
    {
        cout<<"  "<<l;
    }
    cout<<endl;
    }
    return 0;
}