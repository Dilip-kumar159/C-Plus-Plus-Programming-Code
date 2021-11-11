// Functions creation --> It help us to reduce the code easily.
// It is the main part of the stuctured programming , where we break the code into 
// small pieces and make the functions of that code.

// Fuuction prototype --> it is like declared in the program just to tell the compiler 
// that the function is declared it takes so and so code.

#include<iostream>

using namespace std;
    int product(int x, int y);// syntax of function prototype.
    int sum(int a , int b)
    {
        return a + b;
    }
int main()
{
    int n1, n2;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    cout<<"The sum of two numbers is : "<<sum(n1,n2)<<endl;
    cout<<"The product of two numbers is : "<<product(n1,n2)<<endl;
    return 0;
}
    int product(int x, int y)
    {
        return x * y;
    }