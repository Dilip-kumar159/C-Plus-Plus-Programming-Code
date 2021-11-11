// Calloc function 
#include<iostream>

using namespace std;

int main()
{
    int *ptr = (int *)calloc(5,sizeof(int)); // Both malloc and calloc function works same 
        // but the only difference is calloc sets the memory space into zero.
    for(int i=0; i<5; i++)  // here the num sets is 5.
    {
        ptr[i]= i+1;
        cout<<" "<<ptr[i];
    }
    free(ptr);
    return 0;
}