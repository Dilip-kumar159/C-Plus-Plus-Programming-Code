// Constructor with Default Arugments.
#include<iostream>

using namespace std;
class simple
{
    int data1, data2, data3;
    public : 
            simple(int a, int b=11, int c=12)
            {
                data1 = a;
                data2 = b;
                data3 = c;

            }
            void print()
            {
                cout<<"Data1 = "<<data1<<" Data2 = "<<data2<<" Data3 = "<<data3;
            }
};
int main()
{
 simple s(10);
 s.print(); 
    return 0;
}