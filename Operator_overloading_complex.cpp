// Finding the Complex of two numbers using Operator overloading.
#include<iostream>

using namespace std;
class complex
{
    int real,imag;
    public : 
            complex()
            {
                real = 0;
                imag = 0;
            }
            complex(int r, int i)
            {
                real = r;
                imag = i;
            }
            void print()
            {
                cout<<"Complex Number is : "<<real<<" + "<<imag<<"i"<<endl;
            }
            complex operator +(complex c)
            {
                complex temp;
                temp.real = real + c.real;
                temp.imag = imag + c.imag;
                return temp; 
            }
};
int main()
{
  complex c1(5,6);
  complex c2(5,6);
  complex c3 = c1 + c2;
//   c3 = c1 + c2;
  c3.print();  
    return 0;
}