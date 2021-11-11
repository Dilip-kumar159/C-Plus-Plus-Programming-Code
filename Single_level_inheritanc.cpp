// Creating a single level inheritance.
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
int main()
{
  b obj;
  obj.funcA();
  obj.funcB();
    return 0;
}