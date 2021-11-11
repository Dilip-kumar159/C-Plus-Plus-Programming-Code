// Creating a constructor 
#include<iostream>

using namespace std;
class numbers
{
    int a,b;
    public : 
            numbers(int x,int y)// parameterized constructor
            {
                a=x;
                b=y;
            }
            void print()
            {
                cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
            }
};
int main()
{
    numbers c1(4,6); // implict call
    c1.print();
    numbers c2 = numbers(5,7); // explict call
    c2.print();
    return 0;
}