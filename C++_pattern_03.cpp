// printing the star in a given pattern using loops.
#include<iostream>

using namespace std;

int main()
{
    // pattern printing
    // * * * *
    // * * * 
    // * * 
    // * 
    // int n=4;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         if(i+j<4)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Pattern printing 
    // * * * * 
    //   * * * 
    //     * *
    //       * 
    int n=7;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}