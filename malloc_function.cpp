// Using dynamic memory allocation of malloc()
#include<iostream>

using namespace std;

int main()
{
    int n=5;
    int *ptr = (int *)malloc(n * sizeof(int)); // Creates the memory space dynamically.
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i * 2;
    }

    for (int i = 0; i < n; i++)
    {
       cout<<ptr[i]<<endl;
    }
    
    free(ptr);
    return 0;
}