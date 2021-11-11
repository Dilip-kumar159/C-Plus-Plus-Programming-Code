// Code studio problem finding the area of rectangle.
#include<iostream>

using namespace std;
class rectangle
{
    public : 
            int l,b;
        void getdata()
        {
            cin>>l>>b;
        }
        void display()
        {
            cout<<""<<l*b;
        }
};
int main()
{
   rectangle r;
   r.getdata();
   r.display(); 
    return 0;
}