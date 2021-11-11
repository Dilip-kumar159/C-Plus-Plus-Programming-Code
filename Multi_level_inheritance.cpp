// Creating a multi-level inheritance.
#include<iostream>

using namespace std;
class a
{
    public : 
            void funcA()
            {
                cout<<"Base Class funcA() is called "<<endl;
            }
};
class b : public a
{
    public : void funcB()
        {
            cout<<"Dervied Class funcB() is called "<<endl;
        }
};
class c : public b
{
    public : void funcC()
    {
        cout<<"Derived class derived from existing class funcC() is called";
    }
};
int main()
{
  c obj;
  obj.funcA();  
  obj.funcB();  
  obj.funcC();  
    return 0;
}