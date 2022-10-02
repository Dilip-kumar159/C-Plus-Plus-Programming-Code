// Question on if Statement
#include<iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = a + 1;

    if((a=2) == (b=1)){
        cout<<a<<endl;
    }
    else{
        cout<<(b+1)<<endl;

    }
    return 0;
}