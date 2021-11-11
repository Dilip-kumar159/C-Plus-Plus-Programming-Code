// Finding The factorial of a given number using recursion function.
#include<iostream>

using namespace std;
    //  Recursion function
    int factorial(int x)
    {
        if (x<=1)
        {
            return 1;
            cout<<"The factorial of "<<x<<" is 1"<<endl;
        }
        else
    {
        return x * factorial(x - 1);  
    }
        
    }
int main()
{
    int x;
    cout<<"Enter the factorial number : ";
    cin>>x;
    cout<<"The factorial of "<<x<<" is "<<factorial(x)<<endl;
    return 0;
}