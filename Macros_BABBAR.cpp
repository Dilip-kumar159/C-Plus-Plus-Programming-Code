// Creating a Macros 
#include<iostream>

using namespace std;

#define AREA(n,m) (n*m) // macros the value assigned before the compilation.

#define Max(a,b) (((a) > (b)) ? (a) : (b)) // macros no need of storage.


int main()
{
    int a = 10; 
    int b = 5;

    cout<<"AREA is : "<<AREA(a,b)<<endl;
    
    cout<<"Maximum Element is : "<<Max(a,b)<<endl;
    return 0;
}