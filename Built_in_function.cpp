// Built in  functions are also known also library functions.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // Finding largest  of two numbers library function(cmath)
    int maximum = max(2000,4000);
    cout<<"The largest of two numbers is "<<maximum; 
    cout<<endl;
    // Finding smallest of two numbers library function(cmath)
    int minimum = min(200,4000);
    cout<<"The smallest of two numbers is "<<minimum;
    cout<<endl;
    // Finding sqrt of a given number library function(cmath)
    double root = sqrt(144);
    cout<<"The root of 144 is "<<root<<endl;
    // Finding the length of a string
    string a = "dilip v";
    cout<<"The length of a given string is "<<a.length();
    cout<<endl;
    // Converting a lower string to upper through a built in function.
    string b = "coding ninjas";
    for (int i = 0; i < b.length(); i++)
    {
        putchar(toupper(b[i]));
    }
    

    return 0;
}