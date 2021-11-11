// Program to find volume of cuboid , cylinder and side of a rectangle using 
// Function overloading concept.
// Function overloading --> same function name but different arguements
#include<iostream>

using namespace std;
    int volume(int a) // here volume is the function and it takes one arguements.
    {
        return (a*a*a);
    }
    int volume(double r, double m) // here it takes two aruguements.
    {
        return (3.14 * r * r * r * m);
    }
    int volume(int l, int b, int h) // here it takes three arugements.
    {
        return (l * b * h);
    }
int main()
{
    int a,l,b,h;
    double r,m;
    cout<<"Enter the cube : ";
    cin>>a;
    cout<<"Enter the cylinder : ";
    cin>>r>>m;
    cout<<"Enter the side of rectangle : ";
    cin>>l>>b>>h;
    cout<<"Volume of cuboid is : "<<volume(a)<<endl;
    cout<<"Volume of cylinder is : "<<volume(r, m)<<endl;
    cout<<"The side of rectangle is : "<<volume(l,b,h)<<endl;
    return 0;
}