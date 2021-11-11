// Hierarchical inheritance.
#include<iostream>

using namespace std;
class a
{
    public : void show1()
    {
        cout<<"Base class is called "<<endl;
    }
};
class b : public a
{
    public : void show2()
    {
        cout<<"1 Dervied class is called"<<endl;
    }
};
class c : public a
{
    public : void show3()
    {
        cout<<"2 Derived class is called"<<endl;
    }
};
int main()
{
    b obj1;
    obj1.show1();
    obj1.show2();
    c obj2;
    obj2.show1();
    obj2.show3();

    return 0;
}