// Program to print the sum of complex numbers using friend function.
#include<iostream>

using namespace std;
class complex
{
    int a,b;
    public : 
             void setdata(int n1, int n2){
                a=n1;
                b=n2;
            }
            void printdata()
            {
                cout<<"Complex Number is "<<a<<" + "<<b<<"i"<<endl;
            }
            friend complex sumcomplex(complex o1, complex o2);
};
  complex sumcomplex(complex o1, complex o2)
  {
      complex o3;
      o3.setdata((o1.a+o2.a),(o1.b+o2.b));
      return o3;
  }
int main()
{
    complex c1,c2,sum;
    c1.setdata(10, 40);
    c2.setdata(50, 80);
    c1.printdata();
    c2.printdata();
    sum = sumcomplex(c1,c2);
    sum.printdata();

    return 0;
}