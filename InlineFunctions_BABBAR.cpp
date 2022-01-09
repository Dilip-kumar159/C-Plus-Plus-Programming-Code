#include<iostream>

using namespace std;

// inline function replaces the getMax function body with function call , 
// before compiling the program.
// --> it will not take more than 4 line of a code in a function body.
// --> The function call won't take place in stack.
inline int getMax(int a, int b){
    return (a>b)?a:b;
}
int main()
{
    int a = 5;
    int b = 3;

    int ans = getMax(a,b);
    cout<<ans<<endl;

    a = a+1;
    b = b+4;

    ans = getMax(a,b);
    cout<<ans<<endl;

    return 0;
}