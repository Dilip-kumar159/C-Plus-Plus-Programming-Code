// Program to swap two numbers using friend function.
#include<iostream>

using namespace std;
class swapnumber
{
    int a,b; // By default, compiler takes it as private access specifier. 
    public :
            void getdata()
            {
                cin>>a>>b;
            }
            void printdata()
            {
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
            friend void swap(swapnumber &s);
};
 void swap(swapnumber &s)
 {
     int temp = s.a;
     s.a = s.b;
     s.b = temp;
 }
int main()
{
    swapnumber s;
    cout<<"Enter the two numbers : ";
    s.getdata();
    cout<<"Before swapping "<<endl;
    s.printdata();
    swap(s);
    cout<<"After swapping "<<endl;
    s.printdata();

    return 0;
}