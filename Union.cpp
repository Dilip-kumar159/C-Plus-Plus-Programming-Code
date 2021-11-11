// Union creation -->It is also similar to structure but it helps in better memory usage.
#include<iostream>

using namespace std;
    union money
    {
        int num;
        char c;
        float pounds;
    };
    
int main()
{
    union money m;
    m.num = 23;
    cout<<"Number is "<<m.num<<endl;
    m.c = 'd';
    cout<<"Character is "<<m.c<<endl; 
    cout<<m.num; // Here it gives the garbage value.
    // Because it shares only one memory at a time.
    return 0;
}