// Demonstrating the Hybrid Inheritance 
#include<iostream>

using namespace std;

class A{

    public :
    void funcA(){
        cout<<"A function is Called() "<<endl;
    }
};

class D{

    public : 
    void funcD(){
        cout<<"D function is called() "<<endl;
    }
};

class B : public A{

    public : 
    void funcB(){
        cout<<"B function is called()"<<endl;
    }
};

class C : public A, public D{

    public : 
    void funcC(){
        cout<<"C function is called() "<<endl;
    }
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcC();
    obj.funcD();

    cout<<endl<<endl;

    B obj1;
    obj1.funcA();
    obj1.funcB();

    return 0;
}