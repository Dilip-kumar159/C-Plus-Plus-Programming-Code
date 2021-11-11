// Friend class
#include<iostream>

using namespace std;
class A
{
    int x;
    friend class B;
    public : 
            A (int a)
            {
                x = a;
            }
};
class B
{
    public : 
            void show(A obj)
            {
                cout<<"X = "<<obj.x<<endl;
            }
};

int main()
{
    A obj1(5);
    B obj2;
    obj2.show(obj1);    
    return 0;
}