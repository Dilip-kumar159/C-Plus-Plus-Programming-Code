#include<iostream>

using namespace std;
//     // Macro defintion no semicolon, declare should be in #define. 
//     #define LIMIT 5
// int main()
// {
//     for (int i = 0; i < LIMIT; i++)
//     {
//         cout<<"The value of I is : "<< i << endl;
//     }
    
//     return 0;
// }
    // Macro with parameters
    #define area(l , b) (l * b)
int main()
{
    int l = 10, b = 5, a;
    a = l*b;
    cout<<"The area of rectangle is : "<<a;

    return 0;
}
