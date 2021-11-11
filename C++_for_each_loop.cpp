// For_each_loop (Basically for_each_loop is the extended version of for_loop)
// for_each_loop contains input iterator first, iterator last and function.
#include<iostream>
#include<algorithm> // This header file is important for for_each_loop.

using namespace std;
    // void print(int n)
    // {
    //     if (n%2!=0)   // This is for odd number.  
    //     {
    //         cout<<n<<" ";
    //     }
        
    // }

    void print(int n)
    {
        if (n%2==0)     // This is for even number.
        {
            cout<<n<<" ";
        }
        
    }
int main()
{
    int arr[] = {1,2,3,5,4,6,7,8,9,10};
    cout<<"Arrays containing even elements "<<endl;
    for_each(arr,arr+10,print);
    return 0;
}