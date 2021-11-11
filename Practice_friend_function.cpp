// Program to find a complex numbers using friend function.
#include<iostream>

using namespace std;
class complex
{
    int a,b;
    public : 
            void setdata(int n1, int n2)
            {
                a = n1;
                b = n2;
            }    
            void print()
            {
                cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
            }
            friend complex sum(complex o1,complex o2);
};
    complex sum(complex o1, complex o2)
    {
        complex o3;
        o3.setdata((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }
int main()
{
    complex c1,c2,c3;
    c1.setdata(10,20);
    c2.setdata(10,20);
    c1.print();
    c2.print();
    c3 = sum(c1,c2);
    c3.print();
    return 0;
}