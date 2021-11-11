// Print the factorial of a given number.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the factorial of a number : ";
    cin>>n;
    cout<<endl;
    int fact=1;
    if(n<0)
    {
        cout<<"Factorial of (-values) is invalid ";
    }
    else if(n==0)
    {
        cout<<"Factorial of 0 is 1";
    }
    // else
    // {
    //     while(n>=1)
    //     {
    //         fact*=n;
    //         n--;
    //     }
    //     cout<<"Factorial of a given number is "<<fact;
    // }

    else
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        cout<<"Factorial of "<<n<<" is "<<fact;
    }
    return 0;
}