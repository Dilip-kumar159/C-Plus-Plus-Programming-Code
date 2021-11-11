// Inline functions creation.
// Program to calculate the area and circumference of circle using inline function.
#include<iostream>

using namespace std;
    const int pi = 3.14159;
    inline float circum(float x)
    {
        return (2 * pi * x);
    }
    inline float area(float x)
    {
        return (pi * x * x);
    }
int main()
{
    float r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Circumference of the circle is : "<<circum(r)<<endl;
    cout<<"Area of the circle is : "<<area(r)<<endl;
    return 0;
}