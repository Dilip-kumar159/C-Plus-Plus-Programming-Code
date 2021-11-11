// Finding the largest of three numbers.
// Using condition statements.
#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the three numbers "<<endl;
    cin>>a>>b>>c;
    int largest;
    if(a>=b && a>=c)
     largest = a;
    else if(b>=a && b>=c)
     largest = b;
    else if(c>=a && c>=b)
     largest = c;
     cout<<"The largest number is : "<<largest;
    return 0;
}