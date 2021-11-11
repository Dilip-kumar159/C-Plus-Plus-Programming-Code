// Fibonacci series using recursion
#include<iostream>

using namespace std;
    int fibo(int n)
    {
        if ((n==0) || (n==1))
        {
            return 0;
        }
        
       else if (n==2)
        {
            return 1;
        }
        else
        {
            return fibo(n - 2) + fibo(n - 1);
        }
        
    }
int main()
{
    int n;
    cout<<"Enter the number to generate Fibonacci series : ";
    cin>>n;
    int i=0;
    while (i < n)
    {
      ++i;
        cout<<" "<<fibo(i);
    }
    
    cout<<endl<<" "<<i<<"th elememt of the series is : "<<fibo(n)<<endl;
    return 0;
}