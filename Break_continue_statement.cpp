// Break and Continue statement 
#include<iostream>

using namespace std;

int main()
{
    int arr[] = {20,30,40,-50,-60,70};
    int size = 6;
    for(int i=0; i<size; i++)
    {
        if (arr[i]<0)
        {
             cout<<arr[i]<<" "<<endl;
         break;
        }
    }

    for(int i=0; i<size; i++)
    {
        if (arr[i]<0)
        {
         continue;
        }
            cout<<arr[i]<<" ";
    }
    return 0;
}   