#include<iostream>

using namespace std;

int main()
{
    int x = INT_MAX; // Maximum number integer data type can store.
    int y = INT_MIN; // Minimum number integer data type can store.
    x = x + 1;  //-2147483648
    y = y - 1;  // 2147483647
    cout<< x <<endl;
    cout<< y ;
    return 0;
}